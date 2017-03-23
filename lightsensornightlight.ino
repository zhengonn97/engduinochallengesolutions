#include <EngduinoLight.h>
#include <EngduinoLEDs.h>

void setup() {
  // put your setup code here, to run once:
  EngduinoLight.begin();
  EngduinoLEDs.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int v = EngduinoLight.lightLevel();
  Serial.print("Light value: ");
  Serial.println(v);
  if (v>40 && v<130) {
    EngduinoLEDs.setAll(CYAN, 3);
  } else if (v <= 40) {        //as it gets very dark,the CYAN
    EngduinoLEDs.setAll(CYAN); //night light increases in light intensity
  } else {
    EngduinoLEDs.setAll(OFF);
  }
  delay(500);
}
