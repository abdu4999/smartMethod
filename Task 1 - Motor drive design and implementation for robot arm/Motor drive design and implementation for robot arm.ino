// C++ code
//
#include <Servo.h>

int outputV = 0;

int sensorV = 0;

Servo servo_13;

Servo servo_12;

Servo servo_11;

Servo servo_10;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_13.attach(13, 500, 2500);

  servo_12.attach(12, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_9.attach(9, 500, 2500);

}

void loop()
{
  sensorV = analogRead(A0);
  outputV = map(sensorV, 0, 1023, 0, 180);
  servo_13.write(outputV);
  servo_12.write(outputV);
  servo_11.write(outputV);
  servo_10.write(outputV);
  servo_9.write(outputV);
  delay(10); // Delay a little bit to improve simulation performance
}