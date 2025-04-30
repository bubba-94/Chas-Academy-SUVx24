#include <Arduino.h>

const byte ledPin = 13; //A byte stores an 8-bit unsigned number, from 0 to 255.
const byte interruptPin = 2;
volatile byte state = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);

} 
  void loop()
{
  //digitalWrite(ledPin, state);
  //Do nothing in the loop
}
  void blink()
{
  state = !state;
  digitalWrite(ledPin, state);
}
