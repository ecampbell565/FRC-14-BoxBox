#include "drive_base.hpp"
#include "../commands/tank_drive.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Drive_Base::Drive_Base() :
Subsystem("Drive_Base"),
left_motor_1( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_LEFT_1) ),
left_motor_2( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_LEFT_2) ),
left_motor_3( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_LEFT_3) ),
right_motor_1( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_RIGHT_1) ),
right_motor_2( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_RIGHT_2) ),
right_motor_3( new Talon(Ports::Digital_Channels::DRIVE_MOTOR_RIGHT_3) ) {
}

void Drive_Base::InitDefaultCommand() {
	SetDefaultCommand( new Tank_Drive() );
}

void Drive_Base::set_motors_normalized(float left_speed, float right_speed) {
	left_motor_1->Set(constrain(left_speed));
	left_motor_2->Set(constrain(left_speed));
	left_motor_3->Set(constrain(left_speed));
	right_motor_1->Set(constrain(right_speed));
	right_motor_2->Set(constrain(right_speed));
	right_motor_3->Set(constrain(right_speed));
}

float Drive_Base::constrain(float input) {
	if(input > 0.85) {
		input = 0.85;
	}
	else if(input < -0.85) {
		input = -0.85;
	}

	return input;
}
