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
#include <frc2/command/SubsystemBase.h>
#include <frc/AnalogAccelerometer.h>
#include <frc/AnalogGyro.h>
#include <frc/AnalogInput.h>
#include <frc/AnalogOutput.h>
#include <frc/AnalogPotentiometer.h>
#include <frc/Compressor.h>
#include <frc/DigitalInput.h>
#include <frc/DigitalOutput.h>
#include <frc/DoubleSolenoid.h>
#include <frc/Encoder.h>
#include <frc/NidecBrushless.h>
#include <frc/PWMVictorSPX.h>
#include <frc/PowerDistributionPanel.h>
#include <frc/Relay.h>
#include <frc/Servo.h>
#include <frc/Solenoid.h>
#include <frc/Spark.h>
#include <frc/Ultrasonic.h>
#include <frc/drive/DifferentialDrive.h>

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class Subsystem1: public frc2::SubsystemBase {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
frc::PWMVictorSPX m_speedController1{1};
frc::AnalogGyro m_analogGyro1{0};
frc::AnalogAccelerometer m_analogAccelerometer1{1};
frc::Encoder m_quadratureEncoder1{0, 1, false, frc::Encoder::k4X};
frc::Encoder m_indexedEncoder1{2, 3, false};
frc::AnalogPotentiometer m_analogPotentiometer1{2, 1.0, 0.0};
frc::AnalogInput m_analogInput1{3};
frc::DigitalInput m_limitSwitch1{6};
frc::DigitalInput m_digitalInput1{7};
frc::Ultrasonic m_ultrasonic1{8, 9};
frc::PowerDistributionPanel m_powerDistributionPanel1{0};
frc::NidecBrushless m_nidecBrushless1{0, 10};
frc::Servo m_servo1{2};
frc::DigitalOutput m_digitalOutput1{11};
frc::Relay m_spike1{0};
frc::AnalogOutput m_analogOutput1{0};
frc::Compressor m_compressor1{0};
frc::Solenoid m_solenoid1{0, 0};
frc::Relay m_relaySolenoid1{1};
frc::DoubleSolenoid m_doubleSolenoid1{0, 1, 2};
frc::Spark m_speedController4{5};
frc::Spark m_speedController5{6};
frc::DifferentialDrive m_differentialDrive1{m_speedController4, m_speedController5};

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
Subsystem1();

	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
const static std::string const1;
const static int const2;
const static double const3;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS


};

