//Task-1
//Temperature  sensor and the display using Arduino 
int pin=A3;
void setup() {
  serial.begin(9600);
}
void loop() {
  int value = analogRead(pin);
  Serial.println(value);
  delay(1000);
}