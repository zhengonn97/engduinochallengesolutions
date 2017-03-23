#include <EngduinoAccelerometer.h>
#include <Wire.h>
#include <EngduinoLEDs.h>

void setup() {
  // put your setup code here, to run once:
  EngduinoAccelerometer.begin();
  EngduinoLEDs.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float accelerations[3];
  EngduinoAccelerometer.xyz(accelerations);
  float x = accelerations[0];
  float y = accelerations[1];
  float z = accelerations[2];
  Serial.print("Acceleration: x = ");
  Serial.print(x);
  Serial.print("g y = ");
  Serial.print(y);
  Serial.print("g z = ");
  Serial.print(z);
  Serial.println("g");
   if (z > -0.3) {
    EngduinoLEDs.setAll(MAGENTA, 5);
  } else if (z < - 0.9) {
    EngduinoLEDs.setAll(CYAN, 5);
  }
  delay(1000);
}
