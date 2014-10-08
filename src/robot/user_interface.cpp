#include "user_interface.hpp"
#include "commands/set_outtake_forward.hpp"
#include "commands/set_outtake_backward.hpp"
#include <WPILib.h>

Joystick *UI::Primary_Driver::left_stick = new Joystick(1);
Joystick *UI::Primary_Driver::right_stick = new Joystick(2);

JoystickButton *UI::Primary_Driver::outtake_forward_button = 0;
JoystickButton *UI::Primary_Driver::outtake_backward_button = 0;

void UI::initialize() {	
	Primary_Driver::outtake_forward_button = new JoystickButton(Primary_Driver::left_stick, 1);
	Primary_Driver::outtake_backward_button = new JoystickButton(Primary_Driver::right_stick, 1);

	Primary_Driver::outtake_forward_button->WhileHeld( new Set_Outtake_Forward() );
	Primary_Driver::outtake_backward_button->WhileHeld( new Set_Outtake_Backward() );
}
