void motor_stop(int in1, int in2, int en) {
  digitalWrite(in1, false);
  digitalWrite(in2, false);
  digitalWrite(en, true);
}

void motor_freewheel(int in1, int in2, int en) {
  digitalWrite(in1, false);
  digitalWrite(in2, false);
  digitalWrite(en, false);
}

void motor_backwards(int in1, int in2, int en, int pwm_value) {
  digitalWrite(in1, true);
  digitalWrite(in2, false);
  analogWrite(en, pwm_value);
}

void motor_forwards(int in1, int in2, int en, int pwm_value) {
  digitalWrite(in1, false);
  digitalWrite(in2, true);
  analogWrite(en, pwm_value);
}
