#include <Wire.h>

void setup() {
    Wire.begin();
    Serial.begin(9600);
    Serial.println("\nI2C Scanner");
}

void loop() {
    byte error, address;
    int nDevices = 0;
    Serial.println("Scanning...");

    for (address = 1; address < 127; address++) {
        Wire.beginTransmission(address);
        error = Wire.endTransmission();
        if (error == 0) {
            Serial.print("I2C device found at 0x");
            Serial.println(address, HEX);
            nDevices++;
        }
    }

    if (nDevices == 0) {
        Serial.println("No I2C devices found");
    } else {
        Serial.println("Done!");
    }
    delay(2000);
}
