void motors_run() {
  for (int i = 0; i <= 3; i++) {
    pwm_output_value[i] = pwm_output(input_from_fc[i]);
    motor_direction[i] = move_direction(input_from_fc[i]);
    motor_move(motor_position[i], pwm_output_value[i], motor_direction[i]);
  }
}

int pwm_output(int input) {
  if (input >= 1180) {
    return constrain(abs(map(input, 1200, 1800, -255, 255)), 0, 255);
  } else {
    return 0;
  }
}
bool move_direction(int input) {
  return (input >= 1500);
}

void motor_move(MOTOR motor, int pwm_value, bool direction) {
  digitalWrite(motor.in1, direction);
  digitalWrite(motor.in2, !direction);
  analogWrite(motor.en, pwm_value);
}
void motor_stop(MOTOR motor) {
  digitalWrite(motor.in1, true);
  digitalWrite(motor.in2, true);
  analogWrite(motor.en, 255);
}
