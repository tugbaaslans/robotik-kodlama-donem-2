int k=3;
int b=5;
int g=6;

void setup() {
pinMode(k,OUTPUT);
pinMode(b,OUTPUT);
pinMode(g,OUTPUT);
randomSeed(analogRead(0));



}

void loop() {
digitalWrite(g,1);
digitalWrite(b,1);
for(int i=0;i<=255;i++){
  analogWrite(k,i);
  delay(10);
  
}
for(int i=0;i<=255;i++){
  analogWrite(g,i);
  delay(10);
 } 
 for(int i=0;i<=255;i++){
  analogWrite(b,i);
  delay(10);
 }
}
 
 
 
