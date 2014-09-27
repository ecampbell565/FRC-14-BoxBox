#include "outtake.hpp"
#include "../port_mapping.hpp"
#include <WPILib.h>

Outtake::Outtake() :
Subsystem("Outtake"),
baller_motor( new Victor(Ports::Digital_Channels::BALLER_MOTOR) ) {
}

void Outtake::Inititalize() {
	baller_motor->Set(0);
}

void Outtake::set_normalized(float speed) {
	baller_motor->Set(speed);
}
