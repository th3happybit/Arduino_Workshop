/*
Arm - Library for controll an arm robotic.
Created by Oussama Messabih, December 22, 2017.
*/
#ifndef Arm_h
#define Arm_h
#include "Arduino.h"
#include <Servo.h> 

class Arm
{
	public:
	Arm(int servo1pin, int servo2pin,int servo3pin,int servo4pin);
	void moveArm(int ang1,int ang2,int ang3,int ang4);

	private:
	int _servo1pin;
	int _servo2pin;
	int _servo3pin;
	int _servo4pin;
	Servo s1;
	Servo s2;
	Servo s3;
	Servo s4;
	int ang1;
	int ang2;
	int ang3;
	int ang4;
};
#endif