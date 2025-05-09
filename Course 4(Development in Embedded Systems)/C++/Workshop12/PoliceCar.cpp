/*
  Shared function to work as the red/blue lights on a police car 
  Priority only affects scheduling when multiple tasks are simultaneously ready to run. 
  Once a higher-priority task delays itself, lower-priority tasks are allowed to execute

  For this to work semaphores, mutexes or other implementations are needed.
*/
struct PIN 
{
  int ledPin;
  int period;
  int speakerPin;
  int hz;
};

#include <Arduino_FreeRTOS.h>

TaskHandle_t police_car_b, police_car_r;

void setup()
{
  PIN BLUE{.ledPin = 5, .period = 1000, .speakerPin = 10, .hz = 300};
  PIN RED{.ledPin = 4, .period = 1000, .speakerPin = 10, .hz = 200};
  Serial.begin(115200);
  while (!Serial) { }

  /* Init a task that calls 'loop'
   * since after the call to
   * 'vTaskStartScheduler' we'll never
   * get out of setup() and therefore
   * would never get to loop(), as we
   * are leaving the default execution
   * flow.
   */

  auto const rc_task2 = xTaskCreate
    (
      police_car,
      static_cast<const char*>("Blinky Thread"),
      512 / 4,     /* usStackDepth in words */
      (void *) &RED,     /* pvParameters */
      1,           /* uxPriority */
      &police_car_r /* pxCreatedTask */
    );

  if (rc_task2 != pdPASS) {
    Serial.println("Failed to create 'loop' thread");
    return;
  }
  auto const rc_task1 = xTaskCreate
    (
      police_car,
      static_cast<const char*>("Blinky Thread"),
      512 / 4,     /* usStackDepth in words */
      (void *) &BLUE,     /* pvParameters */
      2,           /* uxPriority */
      &police_car_b /* pxCreatedTask */
    );

  if (rc_task1 != pdPASS) {
    Serial.println("Failed to create 'loop' thread");
    return;
  }

  Serial.println("Starting scheduler ...");
  /* Start the scheduler. */
  vTaskStartScheduler();
  /* We'll never get here. */
  for( ;; );
}

void loop()
{
}

// Semaphores, mutexes are needed to separate these tasks to make a functioning police car.

void police_car(void *pvParameters)
{
  /* setup() */
  PIN *incomingParams = (PIN *) pvParameters;
  PIN newPinParams = *incomingParams;
  pinMode(newPinParams.ledPin, OUTPUT);
  digitalWrite(newPinParams.ledPin, LOW);
  noTone (newPinParams.speakerPin);
  /* loop() */
  for(;;)
  {
    digitalWrite(newPinParams.ledPin, !digitalRead(newPinParams.ledPin));
    tone(newPinParams.speakerPin, newPinParams.hz);
    vTaskDelay(newPinParams.period);
  }
}