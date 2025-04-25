#include <Arduino.h>

enum Lights : uint8_t
{
  RED_LED = 4,
  YELLOW_LED = 7,
  GREEN_LED = 8,
  PEDESTRIAN_LED = 13
};

const int PEDESTRIAN_BUTTON = 2;
const int BUZZER = 12;
unsigned long previous_time = 0; 
int state = 0;
int button_debounce = 200;

void pedestrian_light(bool onoff);
void traffic_light (bool red, bool yellow, bool green);
// Simple traffic light
void setup()
{
  pinMode(BUZZER, OUTPUT);
  pinMode(PEDESTRIAN_BUTTON, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  noTone(BUZZER);
  bool pressed = digitalRead(PEDESTRIAN_BUTTON);
  unsigned long current_time = millis();
  Serial.println(pressed);

  // Switch the compared value of MS to change timers.
  switch (state) {
    case 0: 
      traffic_light(false, true, true);
      if (current_time - previous_time >= 3000)
      {
        previous_time = current_time;
        state = 1;
      }
      break;

    case 1:
      traffic_light(false, false, true);
      if (current_time - previous_time >= 1000)
      {
        if (pressed) 
        {
          state = 3;
        }
        previous_time = current_time;
        state = 2;
      }
      break;
    case 2:
    	traffic_light(true, true, false);
      	if (current_time - previous_time >= 5000)
        {
          if (pressed)
          {
            state = 3;
          }
          previous_time = current_time;
          state = 0;
      	}
    	break;
      case 3:
        pedestrian_light(true);
        if (current_time - previous_time >= 10000)
        {
          previous_time = current_time;
          pedestrian_light(false);
          noTone(BUZZER);
          state = 0;
        }
      break;
  }
}
void traffic_light(bool red, bool yellow, bool green)
{

  digitalWrite(RED_LED, red);
  digitalWrite(YELLOW_LED, yellow);
  digitalWrite(GREEN_LED, green);

}
void pedestrian_light(bool onoff)
{

  digitalWrite(PEDESTRIAN_LED, onoff);
  traffic_light(false,true,true);
  tone(BUZZER, 300);
}
