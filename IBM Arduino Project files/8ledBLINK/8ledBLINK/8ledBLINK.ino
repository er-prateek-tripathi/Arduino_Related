#include<SoftwareSerial.h>
int ledPin = 10;   // LED connected to digital pin 13
void setup(){
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
delay(2000);  // 2 sec
digitalWrite(13,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(5,LOW);
delay(2000);  // 2 sec

}
