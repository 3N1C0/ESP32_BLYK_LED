#define BLYNK_TEMPLATE_ID "TMPL2ryX_4xlK"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "3dslSr_u1lJQhSwndMgTzfgRbS4T8ssV"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "MySpectrumWiFid0-2G";
char pass[] = "heavybook528";

#define LED_PIN 2  // Or try 4 if 2 doesn't exist on your board

void setup()
{
  Serial.begin(115200);
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

