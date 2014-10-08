#ifndef SET_OUTTAKE_FORWARD_HPP
#define SET_OUTTAKE_FORWARD_HPP

#include <WPILib.h>

// Make the outtake spin forward
class Set_Outtake_Forward : public Command {
public:
	Set_Outtake_Forward();
	void Initialize() {};
	void Execute(); //in theory I could use Initialize(), but in reality there's sometimes overlap on the button pressing
	bool IsFinished();
	void End() {};
	void Interrupted();

};

#endif // SET_OUTTAKE_FORWARD_HPP
