#include "set_outtake_backward.hpp"
#include "../user_interface.hpp"
#include "../subsystems/subsystems.hpp"
#include <WPILib.h>

Set_Outtake_Backward::Set_Outtake_Backward() {
	Requires(Subsystems::outtake);
}

void Set_Outtake_Backward::Execute() {
	Subsystems::outtake->set_normalized( 0.0, 0.0 ); //replace these with real numbers
}

bool Set_Outtake_Backward::IsFinished() {
	return true
}

void Set_Outtake_Backward::End() {
	Subsystems::outtake->set_normalized( 0.0, 0.0 );
}
