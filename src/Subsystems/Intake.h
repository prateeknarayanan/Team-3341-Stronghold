#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	Talon* intakeMotor;
	AnalogInput* ir;
	bool enabled;

public:
	Intake();
	~Intake();
	void BallIn();
	void BallOut();
	void Stop();
	bool isEnabled();
	void Enable();
	void Disable();
	bool DetectBall();
	double getInput();
};

#endif
