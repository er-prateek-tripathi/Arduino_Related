/*wap to start turning on leds from both top and bottom 
 and remain on(delay = 1 sec)
then turn off all from the middle in same pattern
 */
#include<SoftwareSerial.h>

int ledpin1 = 2;
int ledpin2 = 3;
int ledpin3 = 4;
int ledpin4 = 5;
int ledpin5 = 6;
int ledpin6 = 7;
int ledpin7 = 8;
int ledpin8 = 9;
int ledpin9 = 10;
int ledpin10 = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //turning on all the leds in sequence

digitalWrite(ledpin5 , HIGH);
digitalWrite(ledpin6 , HIGH);
delay(1000);
digitalWrite(ledpin4 , HIGH);
digitalWrite(ledpin7 , HIGH);
delay(1000);
digitalWrite(ledpin3 , HIGH);
digitalWrite(ledpin8 , HIGH);
delay(1000);
digitalWrite(ledpin2 , HIGH);
digitalWrite(ledpin9 , HIGH);
delay(1000);
digitalWrite(ledpin1 , HIGH);
digitalWrite(ledpin10 , HIGH);
delay(1000);

// turning off
digitalWrite(ledpin5 , LOW);
digitalWrite(ledpin6 , LOW);
delay(1000);
digitalWrite(ledpin4 , LOW);
digitalWrite(ledpin7 , LOW);
delay(1000);
digitalWrite(ledpin3 , LOW);
digitalWrite(ledpin8 , LOW);
delay(1000);
digitalWrite(ledpin2 , LOW);
digitalWrite(ledpin9 , LOW);
delay(1000);
digitalWrite(ledpin1 , LOW);
digitalWrite(ledpin10 , LOW);

delay(2500);

}
