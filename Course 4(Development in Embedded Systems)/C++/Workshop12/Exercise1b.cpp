/*
  The code demonstrates the usage of FreeRTOS (Real-Time Operating System) to run concurrent tasks.

  One task is responsible for running the loop() logic (in a thread-safe manner), 
  while the other task blinks an LED using the built-in LED on non-Portenta boards or 
  the RGB LED on the Portenta C33 board.
*/
struct PIN 
{
  int pinVal;
  int period;
};
/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include <Arduino_FreeRTOS.h>

/**************************************************************************************
 * GLOBAL VARIABLES
 **************************************************************************************/

TaskHandle_t loop_task, blinky_task, blinky_task_2;

/**************************************************************************************
 * SETUP/LOOP
 **************************************************************************************/

void setup()
{
  PIN BLUE{.pinVal = 5, .period = 2000};
  PIN RED{.pinVal = 4, .period = 500};
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
  auto const rc_loop = xTaskCreate
    (
      loop_thread_func,
      static_cast<const char*>("Loop Thread"),
      512 / 4,   /* usStackDepth in words */
      nullptr,   /* pvParameters */
      1,         /* uxPriority */
      &loop_task /* pxCreatedTask */
    );

  if (rc_loop != pdPASS) {
    Serial.println("Failed to create 'loop' thread");
    return;
  }

  auto const rc_blinky = xTaskCreate
    (
      blinky_thread_func,
      static_cast<const char*>("Blinky Thread"),
      512 / 4,     /* usStackDepth in words */
      (void *) &RED,     /* pvParameters */
      1,           /* uxPriority */
      &blinky_task /* pxCreatedTask */
    );

  if (rc_blinky != pdPASS) {
    Serial.println("Failed to create 'loop' thread");
    return;
  }
  auto const rc_blinky_2 = xTaskCreate
    (
      blinky_thread_func,
      static_cast<const char*>("Blinky Thread"),
      512 / 4,     /* usStackDepth in words */
      (void *) &BLUE,     /* pvParameters */
      0,           /* uxPriority */
      &blinky_task_2 /* pxCreatedTask */
    );

  if (rc_blinky != pdPASS) {
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
  Serial.println(millis());
  vTaskDelay(configTICK_RATE_HZ/4);
}

void loop_thread_func(void *pvParameters)
{
  for(;;)
  {
    loop();
    taskYIELD();
  }
}

void blinky_thread_func(void *pvParameters)
{
  /* setup() */
  PIN *incomingParams = (PIN *) pvParameters;
  PIN newPinParams = *incomingParams;
  pinMode(newPinParams.pinVal, OUTPUT);
  digitalWrite(newPinParams.pinVal, LOW);

  /* loop() */
  for(;;)
  {
    digitalWrite(newPinParams.pinVal, !digitalRead(newPinParams.pinVal));
    vTaskDelay(newPinParams.period);
  }
}