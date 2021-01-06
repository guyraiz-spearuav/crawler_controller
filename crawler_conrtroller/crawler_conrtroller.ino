const int INPUT_PIN_FROM_FC [4] = {2, 3, 4, 5};
const int REAR_RIGHT_IN1 = 7;
const int REAR_RIGHT_IN2 = 8;
const int REAR_RIGHT_EN = 9;
const int REAR_LEFT_IN1 = 10;
const int REAR_LEFT_IN2 = 11;
const int REAR_LEFT_EN = 12;

struct rear_right_motor {
  int in1 = REAR_RIGHT_IN1;
  int in2 = REAR_RIGHT_IN2;
  int en = REAR_RIGHT_EN;
  int pwm_value = 0;
};
struct rear_left_motor {
  int in1 = REAR_LEFT_IN1;
  int in2 = REAR_LEFT_IN2;
  int en = REAR_LEFT_EN;
  int pwm_value = 0;
};

int input_from_fc [4];

void setup() {
}

void loop() {
  readings();
  motor_stop(&rear_right_motor);
  motor_stop(&rear_left_motor);
}
