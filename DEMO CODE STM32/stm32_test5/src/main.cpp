#include <Arduino.h>
#include "clsPCA9555.h"
#include <Wire.h>
#include <TM1637Display.h>
PCA9555 ioport (0x20);
#define CLK1 PA12
#define DIO1 PA11
#define CLK2 PA10
#define DIO2 PA9
#define CLK3 PA8
#define DIO3 PA7
#define CLK4 PA6
#define DIO4 PA5
#define CLK5 PA4
#define DIO5 PA3
#define CLK6 PA2
#define DIO6 PA1
TM1637Display display1(CLK1, DIO1);
TM1637Display display2(CLK2, DIO2);
TM1637Display display3(CLK3, DIO3);
TM1637Display display4(CLK4, DIO4);
TM1637Display display5(CLK5, DIO5);
TM1637Display display6(CLK6, DIO6);
uint8_t SEG1[] = {
SEG_G , SEG_G , SEG_G , SEG_G
};
uint8_t SEG2[] = {
SEG_B | SEG_C | SEG_E | SEG_F , SEG_B | SEG_C | SEG_E | SEG_F , SEG_B | SEG_C | SEG_E | SEG_F , SEG_B | SEG_C | SEG_E | SEG_F 
};
uint8_t SEG3[] = {
SEG_B | SEG_C | SEG_E | SEG_F | SEG_G , SEG_A | SEG_F | SEG_E | SEG_G | SEG_D , SEG_F | SEG_E | SEG_D , SEG_F | SEG_E | SEG_D
};
uint8_t SEG4[] = {
SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F
};
int Y = 0;
int X = 0;
void setup() {
  // put your setup code here, to run once:
ioport.begin();
pinMode(PC2,INPUT_PULLUP);
pinMode(PC3,INPUT_PULLUP);
pinMode(PC4,INPUT_PULLUP);
pinMode(PC5,INPUT_PULLUP);
pinMode(PC6,INPUT_PULLUP);
pinMode(PC7,INPUT_PULLUP);
pinMode(PC8,INPUT_PULLUP);
pinMode(PC9,INPUT_PULLUP);
pinMode(PC10,INPUT_PULLUP);
pinMode(PC11,INPUT_PULLUP);
pinMode(PB14,INPUT_PULLUP);
pinMode(PB15,INPUT_PULLUP);
ioport.pinMode(0,INPUT);
ioport.pinMode(1,INPUT);
ioport.pinMode(2,INPUT);
ioport.pinMode(3,INPUT);
ioport.pinMode(4,INPUT);
ioport.pinMode(5,INPUT);
ioport.pinMode(6,INPUT);
ioport.pinMode(7,INPUT);
ioport.pinMode(8,INPUT);
ioport.pinMode(9,INPUT);
ioport.pinMode(10,INPUT);
ioport.pinMode(11,INPUT);
ioport.pinMode(12,INPUT);
ioport.pinMode(13,INPUT);
ioport.pinMode(14,INPUT);
ioport.pinMode(15,INPUT);
pinMode(PB0,OUTPUT);
pinMode(PB1,OUTPUT);
pinMode(PB3,OUTPUT);
pinMode(PB4,OUTPUT);
pinMode(PB6,OUTPUT);
pinMode(PB7,OUTPUT);
pinMode(PB12,OUTPUT);
pinMode(PB13,OUTPUT);
display1.setBrightness(0x0f);
display1.clear();
display2.setBrightness(0x0f);
display2.clear();
display3.setBrightness(0x0f);
display3.clear();
display4.setBrightness(0x0f);
display4.clear();
display5.setBrightness(0x0f);
display5.clear();
display6.setBrightness(0x0f);
display6.clear();
display6.setSegments(SEG3);
display5.setSegments(SEG4);
}

void loop() {
analogReadResolution(12);
X = analogRead(PC0);
Y = analogRead(PC1);
display2.showNumberDec(X,true);
display1.showNumberDec(Y,true);
  // put your main code here, to run repeatedly:
if(digitalRead(PC2) == LOW || digitalRead(PC3) == LOW || digitalRead(PC4) == LOW || digitalRead(PC5) == LOW || digitalRead(PC6) == LOW || digitalRead(PC7) == LOW || digitalRead(PC8) == LOW ||digitalRead(PC9) == LOW ||digitalRead(PC10) == LOW ||digitalRead(PC11) == LOW ||digitalRead(PB14) == LOW ||digitalRead(PB15) == LOW ){
digitalWrite(PB0,HIGH);
digitalWrite(PB1,HIGH);
digitalWrite(PB3,HIGH);
digitalWrite(PB4,HIGH);
display3.setSegments(SEG1);
}
else
{
digitalWrite(PB0,LOW);
digitalWrite(PB1,LOW);
digitalWrite(PB3,LOW);
digitalWrite(PB4,LOW);
display3.setSegments(SEG2);
}
if(ioport.digitalRead(0) == LOW || ioport.digitalRead(1) == LOW || ioport.digitalRead(2) == LOW || ioport.digitalRead(3) == LOW || ioport.digitalRead(4) == LOW || ioport.digitalRead(5) == LOW || ioport.digitalRead(6) == LOW || ioport.digitalRead(7) == LOW || ioport.digitalRead(8) == LOW || ioport.digitalRead(9) == LOW || ioport.digitalRead(10) == LOW || ioport.digitalRead(11) == LOW || ioport.digitalRead(12) == LOW || ioport.digitalRead(13) == LOW || ioport.digitalRead(14) == LOW || ioport.digitalRead(15) == LOW){
digitalWrite(PB6,HIGH);
digitalWrite(PB7,HIGH);
digitalWrite(PB12,HIGH);
digitalWrite(PB13,HIGH);
display4.setSegments(SEG1);
}
else
{
digitalWrite(PB6,LOW);
digitalWrite(PB7,LOW);
digitalWrite(PB12,LOW);
digitalWrite(PB13,LOW);
display4.setSegments(SEG2);
}
}