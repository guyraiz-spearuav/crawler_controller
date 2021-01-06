void readings() {
  for (int i = 0; i <= 3; i++) {
    input_from_fc[i] = pulseIn(INPUT_PIN_FROM_FC [i], HIGH);
  }
}
