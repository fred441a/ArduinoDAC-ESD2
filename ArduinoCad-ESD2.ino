
void setup() {
  DDRD = B11110000;
  DDRB = B00001111;
}

void intToDAC(int value) {
  byte binVal = byte(value);
  PORTD = binVal << 4;
  PORTB = binVal >> 4;
}

void loop() {
  intToDAC( map(analogRead(A4), 0, 1023, 0, 255));
}
