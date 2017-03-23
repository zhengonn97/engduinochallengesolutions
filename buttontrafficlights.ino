#include <EngduinoLEDs.h>
#include <EngduinoButton.h>

void setup() {
  // put your setup code here, to run once:
  EngduinoLEDs.begin();
  EngduinoButton.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  EngduinoLEDs.setAll(RED);
  
  EngduinoButton.waitUntilPressed();
  EngduinoLEDs.setAll(YELLOW);
  delay(2000);
  EngduinoLEDs.setAll(GREEN);
  
  EngduinoButton.waitUntilPressed();
  EngduinoLEDs.setAll(YELLOW);
  delay(2000);

}
