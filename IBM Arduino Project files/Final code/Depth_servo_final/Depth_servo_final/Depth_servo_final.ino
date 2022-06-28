
#include <Servo.h>
 
#include<SoftwareSerial.h>
 
int servoPin = 6;

// Create a servo object 

Servo Servo1;
void setup()

{  
    Serial.begin(9600);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}

void loop()

{
    int level = analogRead(A0); 
    // read input value
     Serial.print("Water level = \n");

     Serial.println(level);
  if(level>500&&level<550)
     { 
       digitalWrite(9,1);
       digitalWrite(8,0);
        //No water
        //Make servo go to 0 degrees 
        Serial.println("Tank Empty\n"); 
        digitalWrite(9,1);
        digitalWrite(8,0);
        Serial.println("Opening full flap\n"); 
        digitalWrite(10,1);
        digitalWrite(10,0);
        Servo1.write(0); 
        delay(300);// Make servo go to 90 degrees 
        Servo1.write(90); 
        digitalWrite(10,1);
        digitalWrite(10,0);
        delay(300); 
        // Make servo go to 180 degrees 
        Servo1.write(180); 
        delay(3000);
}
 
   else if(level>590&&level<630)
     { //Little water
        Serial.println("Water available in Tank\n"); 
        Serial.println("Opening half flap\n");
      // Make servo go to 0 degrees 
        Servo1.write(0);
        delay(300); 
      // Make servo go to 90 degrees 
        Servo1.write(90); 
        delay(3000);    
    } 
    
else if(level>630&&level<650) 
        {
          Serial.println("Tank full\n");
          digitalWrite(8,1);
          digitalWrite(9,0);
          digitalWrite(10,1);
          Serial.println("Flap is not supposed to open\n");
        }
       else
       {
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,0);
       }
    
}
