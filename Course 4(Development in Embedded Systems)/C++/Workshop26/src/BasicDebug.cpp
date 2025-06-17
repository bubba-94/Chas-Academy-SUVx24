#include <Arduino.h>

int LED = 3;
int var = 0; 

void calculate()
{
  Serial.println(var);
  digitalWrite(LED, HIGH);
  var++; 
}


void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  calculate();
  delay(1000);
  digitalWrite(LED, LOW);
}