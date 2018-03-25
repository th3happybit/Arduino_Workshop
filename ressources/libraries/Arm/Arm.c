/*
Arm - Library for controll an arm robotic.
Created by Oussama Messabih, December 22, 2017.
*/

#include "Arduino.h"
#include "Arm.h"
#include <Servo.h>

Arm::Arm(int servo1pin, int servo2pin,int servo3pin,int servo4pin)
{
	_servo1pin = servo1pin;
	_servo1pin = servo1pin;
	_servo1pin = servo1pin;
	_servo1pin = servo1pin;
	s1.attach(servo1pin);
	s2.attach(servo2pin);
	s3.attach(servo3pin);
	s4.attach(servo4pin);
}
void Arm::init(){
	s1.write(90);
  	s2.write(90);
  	s3.write(100);
  	s4.write(90);
}
void Arm::moveArm(int ang1,int ang2,int ang3, int ang4)
{
	s1.write(ang1);
  	s2.write(ang2);
  	s3.write(ang3);
  	s4.write(ang4);
}
void Arm::moveArmAxis(int x,int y,int z){
	
}