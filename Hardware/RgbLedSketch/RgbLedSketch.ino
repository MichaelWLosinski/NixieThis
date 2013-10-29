#include "RgbLedImpl.h"

RgbLed* rgb = NULL;

#define RED_PIN 13
#define GREEN_PIN 14
#define BLUE_PIN  15

void setup(){
  rgbLed = RgbLedImpl(RED_PIN, GREEN_PIN, BLUE_PIN);
}

void loop(){
  rainbowTestLoop();
}

void rainbowTestLoop(){
  static char red = 0;
  static char green  = 0;
  static char blue = 0;
  static int colorIndex = 0;  
  
  rgb->setColor(red, green, blue);

  if (0 == colorIndex){
    red++; 
  }else if (1 == colorIndex){
    green++; 
  } else if (2 == color Index) {
    blue++;
    colorIndex = 0;
  }
}



