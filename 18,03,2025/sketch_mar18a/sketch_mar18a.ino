void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(2,1000,500);
  delay(200);
  noTone(2);

}
