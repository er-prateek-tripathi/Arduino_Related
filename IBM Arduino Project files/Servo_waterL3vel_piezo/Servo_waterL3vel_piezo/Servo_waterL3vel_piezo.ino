#include <Servo.h> 
#include<SoftwareSerial.h> 
int servoPin = 6; // Create a servo object Servo Servo1;
int level; 
const int analog_0=0; 
int l1=7; 
int l2=8;
void setup() 
{ 
// put your setup code here, to run once: 
Serial.begin(9600); 
pinMode(l1,OUTPUT); 
pinMode(l2,OUTPUT); 
pinMode(13,OUTPUT);  
// We need to attach the servo to the used pin number    
Servo1.attach(servoPin); 
} 
void loop() 
{ 
// put your main code here, to run repeatedly: 
level=analogRead(analog_0); 
Serial.println(level); 
if(level>500&&level<550)
 { //No water
      digitalWrite(l1, HIGH); 
        digitalWrite(l2, LOW); 
 // Make servo go to 0 degrees        Servo1.write(0);
    delay(300);    
 // Make servo go to 90 degrees   Servo1.write(90);     
      delay(300);   
 // Make servo go to 180 degrees        Servo1.write(180);       
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
 else if(level>620&&level<630) 
{ digitalWrite(l1, LOW); 
  digitalWrite(l2, LOW);
 // Make servo go to 0 degrees        
Servo1.write(0);        
     delay(300);    
// Make servo go to 90 degrees   Servo1.write(90);     
      delay(300); 
 } 
 else if(level>630&&level<650) 
  { //servo motor will be inactive here
 digitalWrite(l1, LOW);
 digitalWrite(l2, HIGH); 
 digitalWrite(13, HIGH); 
 delay(300);
 digitalWrite(13,LOW);
 delay(300);
  } 
  } 