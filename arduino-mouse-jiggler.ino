#include "Mouse.h"
#define ACTIVE 9


void setup() {
  pinMode(ACTIVE, INPUT_PULLUP);
  Mouse.begin();
  Serial.begin(115200);
}

void loop() {
  int x = random(-50, 50);
  int y = random(-50, 50);
  int d = random(20, 200);
  if (!digitalRead(ACTIVE)) {
    Mouse.move(x, y, 0);
  }
  Serial.println(x);
  delay(d);
}
