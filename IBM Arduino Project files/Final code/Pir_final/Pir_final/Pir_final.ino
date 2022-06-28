
//PIR + Piezo
const int PIR_SENSOR_OUTPUT_PIN = 2;	
/* PIR sensor O/P pin */
 int warm_up; 


void setup() { 
pinMode(PIR_SENSOR_OUTPUT_PIN, INPUT); 
Serial.begin(9600);/* Define baud rate for serial communication */ 
    delay(2000);	/* Power On Warm Up Delay */
 int pinMode = (9,OUTPUT);
  
} 
void loop()
 { 
int sensor_output;
sensor_output = digitalRead(PIR_SENSOR_OUTPUT_PIN);
 if( sensor_output == HIGH ) 
{ 
if( warm_up == 1 ) 
{ 
 warm_up = 0;
  delay(2000);

   Serial.print("No object in sight\n\n"); 
        delay(500);
 } 
else
 { 
Serial.print("Object detected\n\n");
         warm_up = 1;
digitalWrite(9,1);
 delay(100); 
digitalWrite (9,0);
delay(300);
}
 }
 }
