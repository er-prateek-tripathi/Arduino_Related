#include <Adafruit_Sensor.h>

//Project Name :- Smart Agriculture Initiative
/*
The whole project is done by Er. Prateek Tripathi.
Under Summer Internship program offered by IBM
And Under essential guidance of my worthy mentors.
*/
#include <Servo.h>
 
#include<SoftwareSerial.h>

#include <DHT.h> 
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
const int PIR_SENSOR_OUTPUT_PIN = 2;
int warm_up;
 
const int trigPin = 4;
 
const int echoPin = 3;
 
float duration;
 
float distance;
int servoPin = 6;
Servo Servo1;
int length = 1;
 
int sensorPin = A0; 
int sensorValue;  
int limit = 300; 
void setup()


    {

  
       /* Define baud rate for serial communication */
       Serial.begin(9600);


  
       //PIR
  
       pinMode(PIR_SENSOR_OUTPUT_PIN, INPUT); 
  
     
  delay(20000);  
       /* Power On Warm Up Delay */
       //ULTRASONIC
 
       pinMode(4, OUTPUT);
 
       // Sets the trigPin as an Output 
       pinMode(3, INPUT); 
  // Sets the echoPin as an Input 
       pinMode(9,OUTPUT);//temperature
      pinMode(8,OUTPUT);//rain detector
      pinMode(7,OUTPUT);//Ultrasonic
  
       //RAIN DETECTOR
  
       pinMode(2, OUTPUT);
    
 
       //DHT11
  
 
       Serial.println("DHT11 test!"); 
  
     dht.begin();
  
   
    
}

    void loop() 
 {
   motion_detector();         //PIR
 
   distance_finding();        //ULTRASONIC
 
   rain_detector();
  
   water_level();
  
 temperature_humidity();    //DHT
 
   moisture();
    
 
}
 
void motion_detector()     //PIR
 
  {
 int sensor_output;
     sensor_output=digitalRead(PIR_SENSOR_OUTPUT_PIN);
 
        if( sensor_output == HIGH ) 
            { 
if( warm_up == 1 )
                  { 
Serial.print("Warming Up\n\n");
             
                     warm_up = 0;
             
                     delay(200); 
                   } 
  
               Serial.print("No object in sight\n"); 
        
               delay(100);
 
             } 
         
else
 { 
                  Serial.print("Object detected\n");
         
                  warm_up = 1;
                 

                }
  
  }
  
void distance_finding()       //ULTRASONIC
 
     {
    
      // Clears the trigPin 
    
        digitalWrite(trigPin, LOW); 
    
        delayMicroseconds(2); 
     
// Sets the trigPin on HIGH state for 10 micro seconds
 
   
        digitalWrite(trigPin, HIGH); 
 
    
        delayMicroseconds(10); 
    
        digitalWrite(trigPin, LOW);
     
// Reads the echoPin, returns the sound wave travel time in microseconds 
    
        
duration = pulseIn(echoPin, HIGH);
    
     
// Calculating the distance
     
        distance= (duration*0.034/2)/100;
     
     
// Prints the distance on the Serial Monitor 
  
        Serial.print("\n Distance of Intruder from field (in metres) : "); 
    
        Serial.println(distance);
     if(distance <= 1 )
     {
      digitalWrite(7,1);
     }
 else{
  digitalWrite(7,0);
 }
     }
  
void rain_detector()
 
 {
   
     //analog output
 
     Serial.println("rain value = ");    Serial.print(analogRead(0)); 
     Serial.print("\n");
     if(analogRead(0)<7)
         Serial.println("No Rain\n");
 
     else if(analogRead(0)>7 && analogRead(0)<20) 
    {
             Serial.println("It's Raining on field\n");
             digitalWrite(8,1);
    }
     else {
             Serial.println("No Rain\n");
 digitalWrite(8,0);
          }
    //digital output
    //  if(digitalRead(2) == HIGH) 
    // Serial.println("No Rain Detected");
    
// else Serial.println("Rain Detected");
 
 
     delay(250);
  
 }
 
 void water_level()
  
     {
   
       int level = analogRead(A0); 
         // read input value

 
     
       Serial.print("Water level =\t");
  Serial.println(level);
  
    
       Serial.print("\n");
       if(level>350&&level<450)
   
          { 
//No water
        // Make servo go to 0 degrees 
 
          
        Serial.println("Volume of water in tank=less\n");
        Serial.println("Opening full flap\n"); 
 
        
 ;       
        Servo1.write(0); 
  
   
        delay(300);
        // Make servo go to 90 degrees 
 
 
        Servo1.write(90); 
        delay(300); 
 
        // Make servo go to 180 degrees 
 
      
        
        Servo1.write(180); 
  
     
        delay(5000);
      
          
}
 
  
      else if(level>250&&level<400)
   
      { //Little water
        
Serial.println("Some Water available in Tank\n"); 
        Serial.println("Opening half flap\n");
 
        // Make servo go to 0 degrees 
   
    
       
        Servo1.write(0);
  
        delay(300); 
  
   
        // Make servo go to 90 degrees 
 
 
        
        Servo1.write(90); 
 
   
          
        delay(5000);
     
      
} 
 
       
else if(level>400)
       
{
  
        
           Serial.println("Tank full\n");
 
          
 ; 
           Serial.println("Flap is not supposed to open\n");
    
        }
  
     }

void temperature_humidity()//DHT
 
     {
  
          pinMode (10, OUTPUT); 
 
          pinMode (11 , OUTPUT);
 
          pinMode (12 , OUTPUT); 
    
          delay(2000); 
  
          float h = dht.readHumidity();
     
          float t = dht.readTemperature();
     
          float f = dht.readTemperature(true);
     
          if (isnan(h) || isnan(t) || isnan(f)) 
 
               { 
Serial.println("Failed to read from DHT sensor!");
 
                 return; 
               } 
           Serial.print("Humidity: ");
     
           Serial.print(h);
  
           Serial.print(" %\t");
     
           Serial.print("Temperature: ");
     
           Serial.print(t); 
 
           Serial.println(" *C "); 
 
           if (t <= 20) 
      
              { 
        
                   Serial.println("Too cold!"); 
        

                  // delay (1000);
 
           
              } 
  
       else if (20 < t < 27)
  
               { 
                 
Serial.println("Perfect temperature!"); 
        

               } 

          else if (t >= 32)
 
               { 
   
                 Serial.println("Too hot!"); 
        
                 digitalWrite(12, HIGH); 
digitalWrite(9,1);
               }
               else
               {
                digitalWrite(9,0);
               }
     }
 
void moisture()
    {
  
         sensorValue = analogRead(sensorPin); 
 
    
         Serial.println("Moisture Value : \t");
 
    Serial.println(sensorValue);
 
    
         delay(1000); 
 
    }
  
