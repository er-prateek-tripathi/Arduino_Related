/*wap in arduino to turn on 8 led one by on in sequence 
 after delay of one sec,then again turn off 
 led in same sequence for same delay
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
pattern1(); // in line
pattern2(); // all on and off
pattern3(); // odd on/off
pattern4(); //even on/off
pattern5(); //all on


}
void pattern1() //in line
{
  digitalWrite(ledpin1 , HIGH);
delay(500);
digitalWrite(ledpin2 , HIGH);
delay(500);
digitalWrite(ledpin3 , HIGH);
delay(500);
digitalWrite(ledpin4 , HIGH);
delay(500);
digitalWrite(ledpin5 , HIGH);
delay(500);
digitalWrite(ledpin6 , HIGH);
delay(500);
digitalWrite(ledpin7 , HIGH);
delay(500);
digitalWrite(ledpin8 , HIGH);
delay(500);
digitalWrite(ledpin9 , HIGH);
delay(500);
digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
digitalWrite(ledpin1 , LOW);
delay(500);
digitalWrite(ledpin2 , LOW);
delay(500);
digitalWrite(ledpin3 , LOW);
delay(500);
digitalWrite(ledpin4 , LOW);
delay(500);
digitalWrite(ledpin5 , LOW);
delay(500);
digitalWrite(ledpin6 , LOW);
delay(500);
digitalWrite(ledpin7 , LOW);
delay(500);
digitalWrite(ledpin8 , LOW);
delay(500);
digitalWrite(ledpin9 , LOW);
delay(500);
digitalWrite(ledpin10 , LOW);
}
void pattern2() // all on and off
{
    digitalWrite(ledpin1 , HIGH);

digitalWrite(ledpin2 , HIGH);

digitalWrite(ledpin3 , HIGH);

digitalWrite(ledpin4 , HIGH);

digitalWrite(ledpin5 , HIGH);

digitalWrite(ledpin6 , HIGH);

digitalWrite(ledpin7 , HIGH);

digitalWrite(ledpin8 , HIGH);

digitalWrite(ledpin9 , HIGH);

digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
digitalWrite(ledpin1 , LOW);

digitalWrite(ledpin2 , LOW);

digitalWrite(ledpin3 , LOW);

digitalWrite(ledpin4 , LOW);

digitalWrite(ledpin5 , LOW);

digitalWrite(ledpin6 , LOW);

digitalWrite(ledpin7 , LOW);

digitalWrite(ledpin8 , LOW);

digitalWrite(ledpin9 , LOW);

digitalWrite(ledpin10 , LOW);
delay(500);
}
void pattern3() // odd on/off
{
    digitalWrite(ledpin1 , HIGH);

//digitalWrite(ledpin2 , HIGH);

digitalWrite(ledpin3 , HIGH);

//digitalWrite(ledpin4 , HIGH);

digitalWrite(ledpin5 , HIGH);

//digitalWrite(ledpin6 , HIGH);

digitalWrite(ledpin7 , HIGH);

//digitalWrite(ledpin8 , HIGH);

digitalWrite(ledpin9 , HIGH);

//digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
digitalWrite(ledpin1 , LOW);

//digitalWrite(ledpin2 , LOW);

digitalWrite(ledpin3 , LOW);

//digitalWrite(ledpin4 , LOW);

digitalWrite(ledpin5 , LOW);

//digitalWrite(ledpin6 , LOW);

digitalWrite(ledpin7 , LOW);

//digitalWrite(ledpin8 , LOW);

digitalWrite(ledpin9 , LOW);

//digitalWrite(ledpin10 , LOW);
delay(500);
}
void pattern4() //even on/off
{
//digitalWrite(ledpin1 , HIGH);

digitalWrite(ledpin2 , HIGH);

//digitalWrite(ledpin3 , HIGH);

digitalWrite(ledpin4 , HIGH);

//digitalWrite(ledpin5 , HIGH);

digitalWrite(ledpin6 , HIGH);

//digitalWrite(ledpin7 , HIGH);

digitalWrite(ledpin8 , HIGH);

//digitalWrite(ledpin9 , HIGH);

digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
//digitalWrite(ledpin1 , LOW);

digitalWrite(ledpin2 , LOW);

//digitalWrite(ledpin3 , LOW);

digitalWrite(ledpin4 , LOW);

//digitalWrite(ledpin5 , LOW);

digitalWrite(ledpin6 , LOW);

//digitalWrite(ledpin7 , LOW);

digitalWrite(ledpin8 , LOW);

//digitalWrite(ledpin9 , LOW);

digitalWrite(ledpin10 , LOW);
delay(500);
}
void pattern5() //all on
{
    digitalWrite(ledpin1 , HIGH);

digitalWrite(ledpin2 , HIGH);

digitalWrite(ledpin3 , HIGH);

digitalWrite(ledpin4 , HIGH);

digitalWrite(ledpin5 , HIGH);

digitalWrite(ledpin6 , HIGH);

digitalWrite(ledpin7 , HIGH);

digitalWrite(ledpin8 , HIGH);

digitalWrite(ledpin9 , HIGH);

digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
digitalWrite(ledpin1 , LOW);

digitalWrite(ledpin2 , LOW);

digitalWrite(ledpin3 , LOW);

digitalWrite(ledpin4 , LOW);

digitalWrite(ledpin5 , LOW);

digitalWrite(ledpin6 , LOW);

digitalWrite(ledpin7 , LOW);

digitalWrite(ledpin8 , LOW);

digitalWrite(ledpin9 , LOW);

digitalWrite(ledpin10 , LOW);
delay(500);
}
void pattern6()
{
  digitalWrite(ledpin1 , HIGH);
delay(500);
digitalWrite(ledpin2 , HIGH);
delay(500);
digitalWrite(ledpin3 , HIGH);
delay(500);
digitalWrite(ledpin4 , HIGH);
delay(500);
digitalWrite(ledpin5 , HIGH);
delay(500);
digitalWrite(ledpin6 , HIGH);
delay(500);
digitalWrite(ledpin7 , HIGH);
delay(500);
digitalWrite(ledpin8 , HIGH);
delay(500);
digitalWrite(ledpin9 , HIGH);
delay(500);
digitalWrite(ledpin10 , HIGH);
delay(500);
// turning off
digitalWrite(ledpin1 , LOW);
delay(500);
digitalWrite(ledpin2 , LOW);
delay(500);
digitalWrite(ledpin3 , LOW);
delay(500);
digitalWrite(ledpin4 , LOW);
delay(500);
digitalWrite(ledpin5 , LOW);
delay(500);
digitalWrite(ledpin6 , LOW);
delay(500);
digitalWrite(ledpin7 , LOW);
delay(500);
digitalWrite(ledpin8 , LOW);
delay(500);
digitalWrite(ledpin9 , LOW);
delay(500);
digitalWrite(ledpin10 , LOW);
}
