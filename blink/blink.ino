#include<SoftwareSerial.h>
void setup() {

pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() {

digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);

delay(100);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);

delay(100);

}
