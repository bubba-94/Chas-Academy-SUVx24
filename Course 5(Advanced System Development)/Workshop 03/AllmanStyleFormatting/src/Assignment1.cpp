/**
 * ASSIGNMENT 1
 *
 * Purpose:
 *
 * Get prepared for using code formatting Allman-style
 *
 * Configure .clang format and integrate it into the workflow
 *
 * Get familiar with git pre-commit hooks and hur they are used to automize
 * ensure a coding standard
 *
 * Exercise using the tools Git + pre-commit + .clang format to create a
 * consistent and professional work environment
 *
 */

#include <Arduino.h>

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
