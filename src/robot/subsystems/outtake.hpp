#ifndef OUTTAKE_HPP
#define OUTTAKE_HPP

#include <WPILib.h>

// The baller motor that controls the intake and outtake
class Outtake : public Subsystem {
public:
	Outtake();
	void Inititalize();
	void set_normalized(float speed);

private:
	Victor *baller_motor;	
};

#endif // OUTTAKE_HPP
