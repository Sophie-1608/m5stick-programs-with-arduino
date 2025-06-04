#include <M5StickCPlus2.h>

void setup() {
  M5.begin();

  Serial.begin(9600);

  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setRotation(3);
  M5.Lcd.setTextSize(2);
  M5.Lcd.println("Hello World");

}

void loop() {

}
