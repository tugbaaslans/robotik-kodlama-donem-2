void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pot=analogRead(A0);
  int LED=map(pot,0,1023,0,255);
  analogWrite(3,LED);
  Serial.print("Pot Değeri =");
  Serial.print(pot);
  Serial.print("\t Led Değeri");
  Serial.println(LED);
  delay(2);

}
