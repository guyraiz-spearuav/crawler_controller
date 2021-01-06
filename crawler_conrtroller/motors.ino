void motor_stop(MOTOR motor) {
  digitalWrite(motor.in1, false);
  digitalWrite(motor.in2, false);
  digitalWrite(motor.en, true);
}

void motor_freewheel(MOTOR motor) {
  digitalWrite(motor.in1, false);
  digitalWrite(motor.in2, false);
  digitalWrite(motor.en, false);
}

void motor_forwards(MOTOR motor, int pwm_value) {
  digitalWrite(motor.in1, false);
  digitalWrite(motor.in2, true);
  analogWrite(motor.en, pwm_value);
}

void motor_backwards(MOTOR motor, int pwm_value) {
  digitalWrite(motor.in1, true);
  digitalWrite(motor.in2, false);
  analogWrite(motor.en, pwm_value);
}
