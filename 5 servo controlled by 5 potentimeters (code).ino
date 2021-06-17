#include <Servo.h>
Servo moto3;
Servo moto4;
Servo moto5;
Servo moto6;
Servo moto7;
int first_pote = 0;
int sec_pote = 0;
int third_pote = 0;
int forth_pote = 0;
int fifth_pote = 0;
void setup()
{
  moto3.attach(3);
  moto4.attach(4);
  moto5.attach(5);
  moto6.attach(6);
  moto7.attach(7);
}

void loop()
{
  first_pote = analogRead(A0);
  first_pote = map(first_pote,0,1023,0,180);
  moto3.write(first_pote);
  
  sec_pote = analogRead(A1);
  sec_pote = map(sec_pote,0,1023,0,180);
  moto4.write(sec_pote);
  
  third_pote = analogRead(A2);
  third_pote = map(third_pote,0,1023,0,180);
  moto5.write(third_pote);
  
  forth_pote = analogRead(A3);
  forth_pote = map(forth_pote,0,1023,0,180);
  moto6.write(forth_pote);
  
  fifth_pote = analogRead(A4);
  fifth_pote = map(fifth_pote,0,1023,0,180);
  moto7.write(fifth_pote);
}