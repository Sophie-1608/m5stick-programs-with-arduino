#include <M5StickCPlus2.h>

int x = 80;
const int y = 60;
const int radius = 10;

void setup() {
  M5.begin();
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setRotation(3);
  M5.Lcd.fillCircle(x, y, radius);

}

void loop() {
  M5.update();
  bool moved = false; 
  if (M5.BtnA.wasPressed()){
    if (x - radius - 5 > 0){
      x-=5;
      moved = true;
    }
  }
  if (M5.BtnB.wasPressed()){
    if (x + radius + 5 < M5.Lcd.width()) {
      x += 5; 
      moved = true;
    }
  }

  if (moved) {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.fillCircle(x, y, radius, RED);
  }
  

}
