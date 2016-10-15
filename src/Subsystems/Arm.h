#ifndef Arm_H
#define Arm_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Arm: public Subsystem
{
private:
	Jaguar* armMotor;
	Gyro* armGyro;
	bool armOn;
public:
	Arm();
	void InitDefaultCommand();
	void moveUp();
	void moveDown();
	void Stop();
	void ArmOn();
	void ArmOff();
	double setAngle(double angle);
	double getAngle();
	~Arm();
};

#endif
