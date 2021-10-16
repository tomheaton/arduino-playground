#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    pinMode(7, INPUT);
}

void loop() {
    int sensorValue = digitalRead(7);
    if (sensorValue == 1) {
        Serial.println((String)"Button pressed (" + sensorValue + ")");
        delay(1);
    }
}