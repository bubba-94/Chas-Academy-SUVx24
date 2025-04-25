#include <Arduino.h>

enum LedPins : uint8_t
{
  RED_LED = 4,
  YELLOW_LED = 7,
  GREEN_LED = 8,
  PEDESTRIAN_LED = 13,
  RGB_RED = 12,
  RGB_GREEN = 11,
  RGB_BLUE = 13
};

// Different timers (ms)
enum Timers : unsigned long
{
    BUTTON_DEBOUNCE = 50,
    GREEN = 5000,
    RED = 3000,
    RED_YELLOW = 1500,
    PEDESTRIAN = 10000
  };
// const int BUZZER = 12;

const int PEDESTRIAN_BUTTON = 2;

unsigned long previous_time = 0; 
int state = 0;
int button_debounce = 200;

void rgb_handler (int red, int blue, int green);
void pedestrian_light(bool onoff);
void traffic_light (bool red, bool yellow, bool green);

// Simple traffic light with a pedestrian light aswell.
void setup()
{
  //pinMode(BUZZER, OUTPUT);

  pinMode(PEDESTRIAN_BUTTON, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RGB_RED, OUTPUT);
  pinMode(RGB_BLUE, OUTPUT);
  pinMode(RGB_GREEN, OUTPUT);

  Serial.begin(9600);
}
void loop()
{
  //noTone(BUZZER);
  // Logic for handling debounce of button 
  bool pressed = handle_button();

  Serial.println(pressed);

  unsigned long current_time = millis();

  // Switch the compared value of MS to change timers.
  switch (state) {
    case 0: 
      traffic_light(false, true, true);
      if (current_time - previous_time >= RED)
      {
        previous_time = current_time;
        state = 1;
      }
      break;

    case 1:
      traffic_light(false, false, true);
      if (current_time - previous_time >= RED_YELLOW)
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
      	if (current_time - previous_time >= GREEN)
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
        if (current_time - previous_time >= PEDESTRIAN)
        {
          previous_time = current_time;
          pedestrian_light(false);
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

bool handle_button()
{

}

// RGB parameter for tone of color 0 - 255
void rgb_handler (int red, int blue, int green)
{
  digitalWrite(RGB_RED, red);
  digitalWrite(RGB_BLUE, blue);
  digitalWrite(RGB_GREEN, green);
}


/*
  void pedestrian_light(bool onoff)
  {

  digitalWrite(PEDESTRIAN_LED, onoff);
  traffic_light(false,true,true);
  tone(BUZZER, 300);
  }
*/
