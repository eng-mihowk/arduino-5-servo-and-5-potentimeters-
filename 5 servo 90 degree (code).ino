#include <Servo.h>
Servo moto3;
Servo moto4;
Servo moto5;
Servo moto6;
Servo moto7;

void setup()
{
  moto3.attach(3);
  moto3.write(90);
  moto4.attach(4);
  moto4.write(90);
  moto5.attach(5);
  moto5.write(90);
  moto6.attach(6);
  moto6.write(90);
  moto7.attach(7);
  moto7.write(90);
}

void loop()
{
  
}