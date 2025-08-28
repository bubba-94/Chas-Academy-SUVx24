/**
 * ASSIGNMENT 2
 *
 * Further build the knowledge of code formatting configuration
 *
 * Exercise and understand the .clang-format file
 *
 * Ensure that code formatting follows the projects standard withfour spaces as
 * indentation
 *
 * Develop a habit to work for independantly with formatting standards
 *
 */

#include <arduino.h>

void setup()
{

    pinMode(LED_BUILTIN, OUTPUT);

    digitalWrite(LED_BUILTIN, HIGH);
}

void loop()
{
    // Blinkar varje sekund
    digitalWrite(LED_BUILTIN, HIGH);

    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);

    delay(1000);
}