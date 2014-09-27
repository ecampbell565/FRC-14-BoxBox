#include "drive_straight.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Drive_Straight::Drive_Straight() :
speed(speed) {
	Requires(Subsystems::drive_base);
}

void Drive_Straight::Initialize() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 ); //replace these with real numbers
}

bool Drive_Straight::IsFinished() {
	return true;
}

void Drive_Straight::End() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}

void Drive_Straight::Interrupted() {
	Subsystems::drive_base->set_motors_normalized( 0.0, 0.0 );
}
