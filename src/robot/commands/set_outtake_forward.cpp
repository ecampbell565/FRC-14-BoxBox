#include "set_outtake_forward.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Outtake_Forward::Set_Outtake_Forward() {
	Requires(Subsystems::outtake);
}

void Set_Outtake_Forward::Execute() {
	Subsystems::outtake->set_normalized( 0.0, 0.0 ); //replace these with real numbers
}

bool Set_Outtake_Forward::IsFinished() {
	return true
}

void Set_Outtake_Forward::End() {
	Subsystems::outtake->set_normalized( 0.0, 0.0 );
}
