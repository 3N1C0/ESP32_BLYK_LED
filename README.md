# ESP32 + Blynk LED

Control an LED on an ESP32 from a phone. A button in the Blynk app sends a signal over the internet, and the ESP32 turns the LED on or off.

## Files

| File | What it is |
|---|---|
| `ESP32_LED_Updated.ino` | Arduino sketch: connects to Wi-Fi and Blynk, and drives the LED on pin 2 from virtual pin V0 |

## How it works

- The ESP32 joins your Wi-Fi network and connects to the Blynk cloud.
- The Blynk app has a button on virtual pin V0.
- When the button changes, Blynk sends the value to the ESP32, which writes it to the LED pin.

## Skills demonstrated

- **IoT:** connecting a microcontroller to a cloud service.
- **Wi-Fi networking** on the ESP32.
- **Remote control:** a mobile app that controls hardware.
- **Arduino C++:** setup and loop structure, event handlers and serial debugging.

## Set it up

1. Wire an LED to pin 2 through a resistor, with the other leg to GND.
2. In Blynk, create a template and a button on V0. Copy the template ID, template name and auth token into the top of the sketch.
3. Enter your Wi-Fi name and password in the sketch.
4. Upload the sketch with the ESP32 board selected in the Arduino IDE, open the Serial Monitor at 115200 baud, then press the button in the app.

The credentials are placeholders in the sketch. Do not publish your own token or Wi-Fi password.
