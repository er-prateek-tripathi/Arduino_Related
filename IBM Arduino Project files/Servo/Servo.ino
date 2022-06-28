
#include <Servo.h> 
#include<SoftwareSerial.h>

 
int servoPin = 7; 
// Create a servo object 

Servo Servo1;
void setup() { 
   // We need to attach the servo to the used pin number 
   
Servo1.attach(servoPin); 


}

void loop()
{ 
   // Make servo go to 0 degrees 
   
    Servo1.write(0); 
  
delay(3000); 
   // Make servo go to 90 degrees 
 
 Servo1.write(90);
   delay(3000); 
   // Make servo go to 180 degrees 
 
      Servo1.write(180);

     delay(300);
}
