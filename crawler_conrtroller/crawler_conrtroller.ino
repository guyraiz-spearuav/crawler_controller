typedef struct {
  int in1;
  int in2;
  int en;
} MOTOR;

void motors_run(void);

void motor_move(MOTOR, int, bool);
int pwm_output (int);
bool move_direction (int);
void motor_stop(MOTOR);


const int INPUT_PIN_FROM_FC [4] = {2, 3, 4, 5};
const int REAR_RIGHT_IN1 = 6;
const int REAR_RIGHT_IN2 = 7;
const int REAR_RIGHT_EN = 8;
const int REAR_LEFT_IN1 = 9;
const int REAR_LEFT_IN2 = 10;
const int REAR_LEFT_EN = 11;

const int rear_right = 0;
const int rear_left = 1;
const int fowards = 0;
const int backwards = 1;


MOTOR motor_position[4] = {
  {REAR_RIGHT_IN1, REAR_RIGHT_IN2, REAR_RIGHT_EN},
  {REAR_LEFT_IN1, REAR_LEFT_IN2, REAR_LEFT_EN},
  {REAR_LEFT_IN1, REAR_LEFT_IN2, REAR_LEFT_EN},
  {REAR_LEFT_IN1, REAR_LEFT_IN2, REAR_LEFT_EN},
};

int input_from_fc [4];
int pwm_output_value [4];
bool motor_direction[4];

void setup() {
  Serial.begin(115200);
}

void loop() {
  //  readings();
  //  motors_run();
  for (int i = 150; i <= 255; i++) {
    motor_move(motor_position[0], i, true);
    motor_move(motor_position[1], i, true);
    delay (25);
  }
  delay (1000);
  motor_stop(motor_position[0]);
  motor_stop(motor_position[1]);
  delay (1000);
  for (int i = 150; i <= 255; i++) {
    motor_move(motor_position[0], i, false);
    motor_move(motor_position[1], i, false);
    delay (25);
  }
  delay(1000);
  motor_stop(motor_position[0]);
  motor_stop(motor_position[1]);
  delay (1000);
  Serial.println("guy");
}
