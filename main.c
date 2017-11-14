/*© 2017 Charlie Welsh. BSD V3 License.*/
task main()
{

startMotor(motorLeft, 63);
startMotor(motorRight, 63);
untilSonarLessThan(sonar, 2)//it's in cm because screw imperial units.
stopMotor(motorLeft)
startMotor(motorRight

}
