// C++ code
//
#include <Servo.h>


int analog1 = 30;
int analog2 = 90;
int analog3 = 100;
long duration, inches, cm;

Servo servo_13;

Servo servo_12;

Servo servo_11;

Servo servo_10;

Servo servo_9;

Servo servo_8;

void setup()
{
  servo_13.attach(13, 500, 2500);

  servo_12.attach(12, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_9.attach(9, 500, 2500);
  
  servo_8.attach(8, 500, 2500);
  
  pinMode(7, OUTPUT); 
  
  pinMode(6, INPUT);
  

  
  pinMode(5, OUTPUT);

}

void servo6()
{
  servo_13.write(analog1);
  servo_12.write(analog2);
  servo_11.write(analog3);
  servo_10.write(analog1);
  servo_9.write(analog2);
  servo_8.write(analog3);
  delay(10); // Delay a little bit to improve simulation performance
}

void servo7()
{
  servo_13.write(0);
  servo_12.write(0);
  servo_11.write(0);
  servo_10.write(0);
  servo_9.write(0);
  servo_8.write(0);
  delay(10); // Delay a little bit to improve simulation performance
}

void loop()
{
     
   
   check();
  
 
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}

void check()
{
  pinMode(7, OUTPUT);
   digitalWrite(7, 0);
   delayMicroseconds(2);
   digitalWrite(7, 1);
   delayMicroseconds(10);
   digitalWrite(7, 0);
   pinMode(6, INPUT);
   duration = pulseIn(6, 1);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
  
  
  if(inches > 21 && inches < 41)
  {
    delay(3000);
    servo6();
    digitalWrite(5,1);
  }
  else
  {
    servo7();
    digitalWrite(5,0);
  }
  
}