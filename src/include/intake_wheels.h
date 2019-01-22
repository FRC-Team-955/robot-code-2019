#ifndef INTAKE_WHEELS_H
#define INTAKE_WHEELS_H

#include "WPILib.h"
#include <ctre/Phoenix.h>
#include <iostream>
#include <constants.h>


class Intake_wheels {
public:
	// initialize intake_wheels
	Intake_wheels(
		// receive parameters
		Joystick *joy1,
		TalonSRX *talon_left,
		TalonSRX *talon_right
	):
		// initialize member variables
		joy1(joy1),
		talon_left(talon_left),
		talon_right(talon_right)
	{
		// run on initialization
		std::cout<<"initializing intake_wheels";
	};

	// run this in TeleopPeriodic
	void update();
private:
	Joystick *joy1;
	TalonSRX *talon_left, *talon_right;
	bool inButton=false, outButton=false;
	float suckSpeed=intake_wheels_speed;
};

#endif
