#include "autonomous.hpp"
#include "set_outtake_forward.hpp"
#include "drive_straight.hpp"

Autonomous::Autonomous() {
	AddSequential( new Drive_Straight(0), 4 );
	AddSequential( new WaitCommand(1) );
	AddSequential( new Set_Outtake_Forward() );
}
