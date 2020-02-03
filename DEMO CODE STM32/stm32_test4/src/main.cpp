#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
pinMode(PB0,OUTPUT);
pinMode(PB1,OUTPUT);
pinMode(PB3,OUTPUT);
pinMode(PB4,OUTPUT);
pinMode(PB6,OUTPUT);
pinMode(PB7,OUTPUT);
pinMode(PB12,OUTPUT);
pinMode(PB13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i <= 255; i++) {
    analogWrite(PB6, i);
    delay(10);
  }
}