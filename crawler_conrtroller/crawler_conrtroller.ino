
// Include the library
#include <L298N.h>

// Pin definition
const signed int IN1 = 7;
const signed int IN2 = 8;
const signed int EN = 9;

// Create one motor instance
L298N rear_right_motor(EN, IN1, IN2);

void setup()
{
  // Used to display information
  Serial.begin(9600);

  motor.setSpeed(70);
}

void loop()
{

  // Tell the motor to go forward (may depend by your wiring)
  motor.forward();

  // Alternative method:
  // motor.run(L298N::FORWARD);

  //print the motor satus in the serial monitor
  printSomeInfo();

  delay(3000);

  // Stop
  motor.stop();

  // Alternative method:
  // motor.run(L298N::STOP);

  printSomeInfo();

  // Change speed
  motor.setSpeed(255);

  delay(3000);

  // Tell the motor to go back (may depend by your wiring)
  motor.backward();

  // Alternative method:
  // motor.run(L298N::BACKWARD);

  printSomeInfo();

  motor.setSpeed(120);

  delay(3000);

  // Stop
  motor.stop();

  printSomeInfo();

  delay(3000);
}

/*
Print some informations in Serial Monitor
*/
void printSomeInfo()
{
  Serial.print("Motor is moving = ");
  Serial.print(motor.isMoving());
  Serial.print(" at speed = ");
  Serial.println(motor.getSpeed());
}
