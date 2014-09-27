#ifndef PORT_MAPPING_HPP
#define PORT_MAPPING_HPP

#include <WPILib.h>


// When developing, if a port has not been determined, it can be replaced with
// `UNKNOWN`. This will allow the code to compile in debug mode, but in release
// mode it will throw an error.
#ifdef DEBUG
#define UNKNOWN 0
#else
#define UNKNOWN @port_not_assigned
#endif

// Constants specifying where all cables on the robot are plugged in.

namespace Ports {
	// Channels on the digital sidecar that generally go to motor controllers.
	namespace Digital_Channels {
		const uint32_t DRIVE_MOTOR_LEFT_1  = 1,
		               DRIVE_MOTOR_LEFT_2  = 2,
					   DRIVE_MOTOR_LEFT_3  = 3,
					   DRIVE_MOTOR_RIGHT_1 = 4,
					   DRIVE_MOTOR_RIGHT_2 = 5,
					   DRIVE_MOTOR_RIGHT_3 = 6;

		const uint32_t BALLER_MOTOR = 7;
	}
}

#endif // PORT_MAPPING_HPP
