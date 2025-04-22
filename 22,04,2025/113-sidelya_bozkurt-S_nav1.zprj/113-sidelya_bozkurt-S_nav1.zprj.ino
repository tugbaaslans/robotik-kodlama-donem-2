/*
    LCD_I2C - Arduino library to control a 16x2 LCD via an I2C adapter based on PCF8574

    Copyright(C) 2020 Blackhack <davidaristi.0504@gmail.com>

    This program is free software : you can redistribute it and /or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.If not, see < https://www.gnu.org/licenses/>.
*/

#include<Wire.h>
#include <LCD_I2C.h>



LCD_I2C lcd(0x27, 16, 2);
const int trig=13;
const int echo=12;
long sure;
float mesafe;


void setup() {

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  lcd.begin();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("mesafe");

  Serial.begin(9600);
 

}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  sure = pulseIn(echo, HIGH);
  
  mesafe = sure * 0.034 / 2;
  
  Serial.print("MESAFE: ");
  Serial.println(mesafe);
  lcd.setCursor(0,1);
  lcd.print(mesafe);

}
