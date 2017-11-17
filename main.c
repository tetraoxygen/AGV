#pragma config(Sensor, dgtl1,  rightQuad,      sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftQuad,       sensorQuadEncoder)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//moves forward 1 foot, approx.
void moveForward(){

	startMotor(leftMotor, 63);
	startMotor(rightMotor, 63);
	untilRotations(1.75, leftQuad);
	stopMotor(leftMotor);
	stopMotor(rightMotor);

}

//moves backward 1 foot, approx.
void moveBackward(){

	startMotor(leftMotor, -63);
	startMotor(rightMotor, -63);
	untilRotations(1.75, leftQuad);
	untilRotations(1.75, rightQuad);
	stopMotor(leftMotor);
	stopMotor(rightMotor);

}

void turnLeft(){

	startMotor(leftMotor, -100);
	startMotor(rightMotor, 127);
	untilRotations(1.15, leftQuad);
	untilRotations(1.15, rightQuad);
	stopMotor(leftMotor);
	stopMotor(rightMotor);

}

void turnRight(){

	startMotor(leftMotor, 127);
	startMotor(rightMotor,-100);
	untilRotations(1.15, leftQuad);
	untilRotations(1.15, rightQuad);
	stopMotor(leftMotor);
	stopMotor(rightMotor);

}

task main()
{

//use the above functions to navigate your maze.
  
}
