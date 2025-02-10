#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.begin(16, 2);
    lcd.backlight();
}

void loop() {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Arduino");
    lcd.setCursor(2, 1);
    lcd.print("GetStarted");
    delay(2000);

    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("DIY");
    lcd.setCursor(0, 1);
    lcd.print("GROUP NO 9");
    delay(2000);
}
