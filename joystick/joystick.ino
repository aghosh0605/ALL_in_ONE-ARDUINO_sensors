int value = 0;

void setup() {
  //pinMode(A0, INPUT);
  //pinMode(A1, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0); // read X axis value [0..1023]
  Serial.print("X:");
  Serial.print(value, DEC);

  value = analogRead(A1); // read Y axis value [0..1023]
  Serial.print(" | Y:");
  Serial.print(value, DEC);

  value = digitalRead(7); // read Button state [0,1]
  Serial.print(" | Button:");
  Serial.println(value, DEC);

  delay(100);
}
