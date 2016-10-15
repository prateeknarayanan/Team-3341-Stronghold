#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm() :
		Subsystem("ExampleSubsystem")
{

}

void Arm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Arm::ArmOn()
{
	armOn=true;
	}
void Arm::ArmOff()
{
	armOn=false;
}
void Arm::Stop()
{
	armMotor -> SetSpeed(0.0);
}
void Arm::moveUp()
{
	armMotor -> SetSpeed(0.4);
	}
void Arm::moveDown()
{
	armMotor -> SetSpeed(-0.4);
	}
void Arm::setAngle( double angle)
{
	if(armGyro -> GetAngle()< angle)
	{
		while(armGyro ->GetAngle()< angle)
		{
			armMotor -> SetSpeed(-0.5);
		}
		armMotor -> SetSpeed(0.0);
	}

	}
void Arm::getAngle()
{
	return armGyro ->GetAngle();
	}

// Put methods for controlling this subsystem
// here. Call these from Commands.
