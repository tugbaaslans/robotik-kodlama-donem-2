/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

void setup() {
 
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
 
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  delay(1);
  if(sensorValue>0 && sensorValue<=300){
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    
  }
  else if(sensorValue>=301 && sensorValue<=700){
     digitalWrite(4,1);
    digitalWrite(3,1);
    digitalWrite(5,0);
  }
  else if (sensorValue>=701 && sensorValue<=1023){
    digitalWrite(5,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
  }
  
        
}
