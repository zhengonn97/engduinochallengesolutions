#include <EngduinoLEDs.h> 

void setup() {
  EngduinoLEDs.begin();
}

void loop() {
  int i = rand() % 6; //LEDs numbered 0 to 5
  int k = (rand() % 6) + 6; //LEDs numbered 6 to 11
  int l = (rand() % 4) + 12; //LEDs numbered 12 to 15
  EngduinoLEDs.setLED(i, GREEN);
  delay(20);
  EngduinoLEDs.setLED(i, OFF);
  EngduinoLEDs.setLED(k, RED);
  delay(20);
  EngduinoLEDs.setLED(k, OFF);
  EngduinoLEDs.setLED(l, BLUE);
  delay(20);
  EngduinoLEDs.setLED(l, OFF);
}
