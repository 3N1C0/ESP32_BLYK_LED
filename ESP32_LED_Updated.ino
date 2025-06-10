#define BLYNK_TEMPLATE_ID 
#define BLYNK_TEMPLATE_NAME 
#define BLYNK_AUTH_TOKEN //Insert from BLYK
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = //WiFi Name
char pass[] = //WiFi Password

#define LED_PIN 2  // Pin Number on ESP32 Board

void setup()
{
  Serial.begin(115200); //Needs to be 115200 for ESP32
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Booting...");
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected");

  Blynk.config(BLYNK_AUTH_TOKEN);
  Blynk.connect();
}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();
  digitalWrite(LED_PIN, pinValue);
  Serial.print("Button pressed: ");
  Serial.println(pinValue);
}

void loop()
{
  Blynk.run();
}

