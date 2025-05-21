#include <arduino.h>
#include <SPI.h>
#include <WiFiS3.h>

#include "../include/arduino_secrets.h"

void shutOff(uint8_t pin, uint8_t pinTwo);
void blink(uint8_t pin);
// Addressing
IPAddress subnet (255,255,240,0);
IPAddress gateway (192,168,1,1);
IPAddress local_ip (192,168,1,112);


// Status of WiFi
int status = WL_IDLE_STATUS;

const int GREEN_LED = 10;
const int RED_LED = 7;

char SSID[] = SECRET_SSID;
char PASS[] = SECRET_PASSWORD;
char IP[] = SECRET_IP;
char DNS[] = SECRET_DNS;
char SUBNET[] = SECRET_SUBNET;

unsigned long startMillis;
const unsigned long blinkTimer = 200;
const unsigned long disconnectTimer = 10000;

void setup()
{
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
  while (!Serial){} // Start serial first
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  startMillis = millis ();
  if (WiFi.status() == WL_NO_SHIELD)
  {
    Serial.println("WiFi shield not present");
    while(true);
  }

  // Config the WiFi to match your own
  WiFi.config(local_ip, gateway, subnet);

  // Loop while status is not connected 
  while(status != WL_CONNECTED)
  {
    Serial.print("Connecting to SSID:");
    Serial.println(SSID);
    status = WiFi.begin(SSID, PASS);
  }

  Serial.print("Connection to SSID: ");
  Serial.print(SSID);
  Serial.println(" successful");

  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
}

void loop()
{ 
  if (status == WL_CONNECTED)
  {
    
    if (millis() - startMillis >= blinkTimer)
    {
      blink(GREEN_LED);
      startMillis = millis();
      Serial.println("Running....");
    }
  }
}

void blink(uint8_t pin)
{
  digitalWrite(pin, !digitalRead(GREEN_LED));
}
void shutOff(uint8_t pin, uint8_t pinTwo)
{
  digitalWrite(pin, LOW);
  digitalWrite(pinTwo, LOW);
}