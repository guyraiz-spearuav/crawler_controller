void motors_run() {
  for (int i = 0; i <= 3; i++) {
    pwm_output_value[i] = pwm_output(input_from_fc[i]);
    motor_direction[i] = move_direction(input_from_fc[i]);
    motor_move(motor_position[i], pwm_output_value[i], motor_direction[i]);
  }
}

int pwm_output(int input) {
  return abs(map(input, 1000, 2000, -255, 255));
}
bool move_direction(int input) {
  return (input >= 1500);
}

void motor_move(MOTOR motor, int pwm_value, bool direction) {
  digitalWrite(motor.in1, direction);
  digitalWrite(motor.in2, !direction);
  analogWrite(motor.en, pwm_value);
}
