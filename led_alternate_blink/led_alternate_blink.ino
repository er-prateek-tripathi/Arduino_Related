#include<SoftwareSerial.h>
int ledpin1 = 13;
int ledpin2 = 12;
int ledpin3 = 11;
int ledpin4 = 10;
int ledpin5 = 9;
int ledpin6 = 8;
int ledpin7 = 7;
int ledpin8 = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
pinMode(ledpin4,OUTPUT);
pinMode(ledpin5,OUTPUT);
pinMode(ledpin6,OUTPUT);
pinMode(ledpin7,OUTPUT);
pinMode(ledpin8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0 ; i < 5 ; i++)
{
  digitalWrite(ledpin1,HIGH);
  delay(1000);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin1,LOW);
  delay(1000);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin2,LOW);
  delay(1000);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin3,LOW);
  delay(1000);
  digitalWrite(ledpin5,HIGH);
  digitalWrite(ledpin4,LOW);
  delay(1000);
  digitalWrite(ledpin6,HIGH);
  digitalWrite(ledpin5,LOW);
  delay(1000);
  digitalWrite(ledpin7,HIGH);
  digitalWrite(ledpin6,LOW);
  delay(1000);
  digitalWrite(ledpin8,HIGH);
  digitalWrite(ledpin7,LOW);
  delay(1000);
  digitalWrite(ledpin8,LOW);
}
}
