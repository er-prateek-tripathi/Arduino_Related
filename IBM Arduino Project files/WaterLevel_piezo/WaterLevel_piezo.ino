int level; 
const int analog_0=0; 
int l1=12; 
int l2=11; 
int l3=10;
int l4=9; 
void setup()
 {
 // put your setup code here, to run once: 
Serial.begin(9600); 
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT); 
pinMode(l3,OUTPUT); 
pinMode(l4,OUTPUT); 
pinMode(8,OUTPUT); 
} 
void loop()
 { 
// put your main code here, to run repeatedly: 
level=analogRead(analog_0); Serial.println(level); if(level>500&&level<550)
 { 
digitalWrite(l1, HIGH); 
digitalWrite(l2, LOW); 
digitalWrite(l3, LOW); 
digitalWrite(l4, LOW); 
}
 else if(level>600&&level<620)
 { 
digitalWrite(l1, LOW);
 digitalWrite(l2, HIGH); 
digitalWrite(l3, LOW);
 digitalWrite(l4, LOW); 
} 
else if(level>620&&level<630) 
{ 
digitalWrite(l1, LOW);
 digitalWrite(l2, LOW); 
digitalWrite(l3, HIGH);
 digitalWrite(l4, LOW);
 } 
else if(level>630&&level<650) 
{
 digitalWrite(l1, LOW);
 digitalWrite(l2, LOW); 
digitalWrite(l3, LOW); 
digitalWrite(l4, HIGH); 
digitalWrite(8, LOW); 
}
 } 
