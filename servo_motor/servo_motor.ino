
#include <Servo.h>
#define pot 3 //attach potentiometer on pin 3
Servo myservo;

int Position ;

void setup() 
{  
  myservo.attach(11); //attach servo motor at pin 11 digital pin 
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
Position = analogRead(pot);
Position = map(Position, 0, 1023, 0, 255); 
myservo.write(Position);        
} 
