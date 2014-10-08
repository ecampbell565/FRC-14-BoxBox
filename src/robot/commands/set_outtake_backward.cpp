#include "set_outtake_backward.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Outtake_Backward::Set_Outtake_Backward() {
	Requires(Subsystems::outtake);
}

void Set_Outtake_Backward::Execute() {
	Subsystems::outtake->set_normalized( -1.0 );
}

bool Set_Outtake_Backward::IsFinished() {
	return false;
}

void Set_Outtake_Backward::Interrupted() {
	Subsystems::outtake->set_normalized( 0.0 );
}
