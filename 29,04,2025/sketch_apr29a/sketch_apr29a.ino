void setup() {
 Serial.begin(9600);
 pinMode(6,OUTPUT);
 pinMode(7,INPUT);
 pinMode(8,OUTPUT);
 for(int i=2;i<=7;i++)pinMode(i,OUTPUT);
}

void loop() {
 digitalWrite(6,1);
 delay(1);
 digitalWrite(6,0);
 int sure=pulseIn(9,1);
 int mesafe=(sure/2)/28.97;
 Serial.print("olculen mesafe=");
 Serial.println(mesafe);
 delay(1);

 if(mesafe>=0&&mesafe<=10) {
  
    digitalWrite(1,1);
    digitalWrite(8,1);
    digitalWrite(2,1);
    digitalWrite(3,1);
 }

else if(mesafe>=10&&mesafe<=30) 
 { 
    digitalWrite(1,1);
    digitalWrite(8,1);
    delay(200);
    digitalWrite(2,1);
    digitalWrite(3,0);
    
  }
 else if(mesafe>=30&&mesafe<=50) 
 { 
    digitalWrite(1,1);
    digitalWrite(8,1);
    delay(200);
    digitalWrite(2,0);
    digitalWrite(3,0);
}
else{
    digitalWrite(1,0);
    digitalWrite(2,0);
    digitalWrite(3,0);
}
}
