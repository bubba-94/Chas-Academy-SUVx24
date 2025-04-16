#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int temperature = 10;

LiquidCrystal_I2C lcd1(0x20, 16, 2);
LiquidCrystal_I2C lcd2(0x26, 16, 2);
LiquidCrystal_I2C lcd3(0x23, 16, 2);

void setup(){  
  lcd1.init();
  lcd1.backlight();
  lcd2.init();
  lcd2.backlight();
  lcd3.init();
  lcd3.backlight();
}

void loop(){
  
  lcd3.clear();
  lcd2.clear();
  lcd1.clear();
  lcd3.print("C: " + String(calcCelsius(temperature), 2) + " degrees");
  lcd2.print("F: " + String(calcFahrenheit(temperature), 2) + " degrees");
  lcd1.print("K: " + String(calcKelvin(temperature), 2) + " degrees");
  
  temperature ++;
  delay (2000);
}

float calcKelvin (int temp){
  return temp + 273.15;
}

float calcFahrenheit(int temp){
  return(temp * 9.0 / 5.0) + 32; 
}

float calcCelsius(int temp){
  return temp;
}