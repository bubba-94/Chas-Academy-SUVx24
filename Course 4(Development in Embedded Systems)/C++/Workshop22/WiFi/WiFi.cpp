#include "arduino_secrets.h"
#include <WiFiS3.h>

char SSID[] = SECRET_SSID;
char PASS[] = SECRET_PASSWORD;

// Enums for different timers
enum TIMER : unsigned long
{
    BLINK200 = 200,
    BLINK100 = 100,
    CONNECT = 1000,
    DISCONNECT = 30000
};

// Enums for LED Pins
enum LED : uint8_t
{
    RED = 7,
    GREEN = 8
};

// Timers
unsigned long startTimer = millis();
unsigned long lastBlinkTime = 0;
unsigned long lastConnectAttempt = 0;

void blink(uint8_t pin);

void setup()
{   
    pinMode(LED::RED, OUTPUT);
    pinMode(LED::GREEN, OUTPUT);
    digitalWrite(LED::RED, LOW);
    digitalWrite(LED::GREEN, HIGH);
    Serial.println("Waiting");
    delay(2000);

    Serial.begin(115200);
    while (!Serial);

    WiFi.begin(SSID, PASS);
}

void loop()
{
    int status = WiFi.status();

    if (status != WL_CONNECTED)
    {
        // Try reconnecting every 1000 ms if disconnected
        if (millis() - lastConnectAttempt >= TIMER::CONNECT)
        {
            Serial.print("Connecting to: ");
            Serial.println(SSID);

            WiFi.begin(SSID, PASS);
            lastConnectAttempt = millis();
            Serial.println("Successful connection");
            Serial.println("Run for approx 25 sec");
        }

    }
    else
    {
        // Blink GREEN LED every BLINK100 ms if connected
        if (millis() - lastBlinkTime >= TIMER::BLINK100)
        {
            digitalWrite(LED::RED, HIGH);
            blink(LED::GREEN);
            lastBlinkTime = millis();
        }
    }

    // Disconnect every 30 seconds ish
    if(millis() - startTimer >= TIMER::DISCONNECT)
    {
      digitalWrite(LED::GREEN, HIGH);
      digitalWrite(LED::RED, LOW);
      WiFi.disconnect();
      startTimer = millis();
      Serial.println("Disconnected for 5 seconds before connecting again ...");
      delay(5000);
    }
    delay(10);
}

// Write ON/OFF
void blink(uint8_t pin)
{
    digitalWrite(pin, !digitalRead(pin));
}