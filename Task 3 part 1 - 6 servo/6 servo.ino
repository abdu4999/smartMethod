// C++ code
//
#include <Servo.h>


int analog1 = 30;
int analog2 = 90;
int analog3 = 100;

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


void loop()
{
     
servo6();

 
}

