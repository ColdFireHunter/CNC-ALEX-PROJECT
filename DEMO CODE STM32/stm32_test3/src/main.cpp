#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
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
void setup()
{
}

void loop()
{
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
for(int i = 0;i<100; i++){
display1.showNumberDec(i,true);
delay(10);
}
for(int i = 0;i<100; i++){
display2.showNumberDec(i,true);
delay(10);
}
for(int i = 0;i<100; i++){
display3.showNumberDec(i,true);
delay(10);
}
for(int i = 0;i<100; i++){
display4.showNumberDec(i,true);
delay(10);
}
for(int i = 0;i<100; i++){
display5.showNumberDec(i,true);
delay(10);
}
for(int i = 0;i<100; i++){
display6.showNumberDec(i,true);
delay(10);
}
}