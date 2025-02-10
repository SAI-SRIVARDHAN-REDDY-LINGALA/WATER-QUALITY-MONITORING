#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

// Define DS18B20 temperature sensor pin
#define ONE_WIRE_BUS 2

// Initialize OneWire and DS18B20 libraries
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Initialize LCD with I2C address 0x27 (16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    Serial.begin(9600);  // Start Serial Monitor at 9600 baud
    lcd.begin(16, 2);    // Initialize LCD
    lcd.backlight();     // Turn on LCD backlight
    sensors.begin();     // Start temperature sensor

    // Display Welcome Message
    lcd.setCursor(0, 0);
    lcd.print("Smart Water Mon.");
    lcd.setCursor(0, 1);
    lcd.print("Initializing...");
    delay(2000);
    lcd.clear();
}

void loop() {
    // Get temperature from DS18B20
    sensors.requestTemperatures();
    float temperatureC = sensors.getTempCByIndex(0);

    // Get TDS sensor value (connected to A0)
    float sensorValue = analogRead(A0);
    float tdsValue = sensorValue * 1.25; // Convert analog reading to TDS (ppm)

    // Display on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp (C): ");
    lcd.print(temperatureC, 1); // Display with 1 decimal place
    lcd.setCursor(0, 1);
    lcd.print("TDS (ppm): ");
    lcd.print(tdsValue, 1);

    // Print to Serial Monitor
    Serial.print("Temperature: ");
    Serial.print(temperatureC, 1);
    Serial.println(" °C");

    Serial.print("TDS Value: ");
    Serial.print(tdsValue, 1);
    Serial.println(" ppm");

    delay(1000); // Delay before next reading
}
