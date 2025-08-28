/**
 * ASSIGNMENT 3
 *
 * Exercise consecutive naming conventions i code (file naming, function naming,
 * constants etc)
 *
 * Configure .clang-tidy to automatically controll code styles and flag for
 * deviations
 *
 * Further develop the understanding of how tools can be utiilized to ensure
 * unanimous standards
 *
 * Combine rules for naming + formatting (Allman-style + 4 space-indentation) i
 * the projects workflow later
 *
 * MOCK CODE PROVIDED, HAVE NOT TESTED ACTUAL CODE
 *
 *
 * CODE STYLE AND FORMATTING
 *
 * Use .clang-tidy to automatically control code style and find deviations
 *
 * Follow Allman-style formatting for codes identation and blockstructure, so
 * that the code becomes more readable and maintainable
 *
 *
 * What .clang-tidy will do is:
 * verify-indent: true + indent-size: 4 | ensure 4 space-indentation
 * file-name-case: camel -> Ex. sensorReader.cpp instead of Sensor-reader.cpp
 * identifier-case: camel -> Ex. readSensor() instead of Read_Sensor()
 * constant-case: upper -> Ex. const int MAX_TEMP = 100
 *
 *
 * use a cpp linter intestead that supports clang-format and clang-tidy
 * link: https://github.com/cpp-linter/cpp-linter-hooks
 */

#include <Arduino.h>

const int max_temp = 100;
int Read_Temperature()
{
    int temp = analogRead(A0);
    return map(temp, 0, 1023, 0, 150);
}
void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
}
void loop()
{
    int Temperature = Read_Temperature();
    if (Temperature > max_temp)
    {
        Serial.println("Warning: Overheat!");
    }
    else
    {
        Serial.println("Temperature OK.");
    }
    delay(1000); // Avsteg kan flaggas om prohibit-delay sätts till true
}
