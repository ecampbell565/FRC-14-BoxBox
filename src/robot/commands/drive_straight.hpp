#ifndef DRIVE_STRAIGHT_HPP
#define DRIVE_STRAIGHT_HPP

#include <WPILib.h>

// Drive in a (sorta) straight line with the given speeds
class Drive_Straight : public Command {
public:
	Drive_Straight(float speed);
	void Initialize();
	void Execute() {};
	bool IsFinished();
	void End();
	void Interrupted();
	
private:
	float speed;
};

#endif // DRIVE_STRAIGHT_HPP
