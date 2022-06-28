#include <Servo.h> 

int servoPin = 6; 
int level; 

int l1=7; 

void setup()
{
// put your setup code here, to run once: 
Serial.begin(9600); 
pinMode(l1,OUTPUT); 
pinMode(l2,OUTPUT); 
pinMode(13,OUTPUT); 
// We need to attach the servo to the used pin number 
Servo1.attach(servoPin); 

void loop()
{ 


Serial.println(level); 
if(level>500&&level<550)
 { 
      digitalWrite(l1, HIGH); 
        digitalWrite(l2, LOW); 
 // Make servo go to 0 degrees 
    delay(300); 
 // Make servo go to 90 degrees 
      delay(300); 
 // Make servo go to 180 degrees 
      delay(5000);
}
 else if(level>600&&level<620)
 { //Little water
 digitalWrite(l1, LOW);
 digitalWrite(l2,LOW);
 // Make servo go to 0 degrees 
 Servo1.write(0); 
      delay(300); 
  // Make servo go to 90 degrees 
 Servo1.write(90); 
     delay(300); 
  // Make servo go to 180 degrees 
 Servo1.write(180); 
       delay(5000);
  } 
 

  digitalWrite(l2, LOW);
 // Make servo go to 0 degrees 
Servo1.write(0); 
     delay(300); 
// Make servo go to 90 degrees 
      delay(300);
 } 
 
  
 digitalWrite(l1, LOW);
 digitalWrite(l2, HIGH); 
 
 
 digitalWrite(13,LOW);
 delay(300);
  }
  } 