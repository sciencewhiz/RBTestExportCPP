
// RobotBuilder Version: 3.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#pragma once



	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "frc/Joystick.h"
#include "frc2/command/Command.h"

#include "Subsystems/Subsystem2.h"
#include "Subsystems/Subsystem1.h"
#include "Subsystems/Subsystem1.h"

#include <frc2/command/button/JoystickButton.h>

#include "Commands/AutonomousCommand.h"
#include "Commands/Command1.h"
#include "Commands/Command2.h"
#include "Commands/Command3.h"
#include "Commands/Command4.h"
#include "Commands/Command5.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

class RobotContainer {

public:
	RobotContainer();
	frc2::Command* GetAutonomousCommand();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

private:


	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
// The robot's subsystems
Subsystem2 m_subsystem2;
Subsystem1 m_subsystem1;

// Joysticks
frc::Joystick m_joystick1{0};

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

AutonomousCommand m_autonomousCommand;

void ConfigureButtonBindings();
};