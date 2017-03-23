#include <EngduinoLEDs.h>
#include <EngduinoThermistor.h>

void setup() {
  // put your setup code here, to run once:
  EngduinoLEDs.begin();
  EngduinoThermistor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float upperTemp = 26.00; //upper boundary of temperature, change as required
  float temp = EngduinoThermistor.temperature(CELSIUS);
  Serial.println(temp);
  if (temp > upperTemp) {
    EngduinoLEDs.setAll(RED, 5);
    delay(1000);
  } else {
    EngduinoLEDs.setAll(BLUE, 5);
    delay(1000);
  } 
}
