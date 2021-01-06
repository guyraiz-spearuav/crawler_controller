const int INPUT_PIN_FROM_FC [4] = {2, 3, 4, 5};
const int REAR_RIGHT_IN1 = 7;
const int REAR_RIGHT_IN2 = 8;
const int REAR_RIGHT_EN = 9;
const int REAR_LEFT_IN1 = 10;
const int REAR_LEFT_IN2 = 11;
const int REAR_LEFT_EN = 12;

typedef struct{
  int in1;
  int in2;
  int en;
}MOTOR;

MOTOR rear_right;
MOTOR rear_left;

int input_from_fc [4];
void motor_stop(MOTOR motor);
void motor_freewheel(MOTOR motor);
void motor_forwards(MOTOR motor, int);
void motor_backwards(MOTOR motor, int);
void setup() {
}

void loop() {
  readings();
  motor_stop(rear_right);
  motor_stop(rear_left);
}
