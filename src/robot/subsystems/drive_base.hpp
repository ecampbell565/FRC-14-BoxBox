#ifndef DRIVE_BASE_HPP
#define DRIVE_BASE_HPP

#include <WPILib.h>

// The drive motors
class Drive_Base : public Subsystem {
public:
	Drive_Base();
	void InitDefaultCommand();
	void set_motors_normalized(float left_speed, float right_speed);

private:
	Talon *left_motor_1,
		  *left_motor_2,
		  *left_motor_3,
		  *right_motor_1,
		  *right_motor_2,
		  *right_motor_3;
	bool do_stuff;
	float constrain(float input);
};

#endif // DRIVE_BASE_HPP
