#ifndef ColonTubeSketch
#define ColonTubeSketch

#include "ColonTube.h"
#include "ColonTubeImpl.h"

#define BRIGHTNESS_PIN 13
#define TOP_PIN 14
#define BOTTOM_PIN 15
#define FULL_BRIGHTNESS 1

ColonTube* colonTube = NULL;

void setup(){
  colonTube = new ColonTubeImpl(ColonTube::colon, brightness, topPin, bottomPin);   
}

void loop(){
  static int testCase = 1;    
  switch(testCase+)
  {
    case 1:
      periodTestLoop();
      break;
     
    case 2:
      colonTestLoop();
      break;
     
    case 3:  
      brightnessTestLoop();
      break;
   
    case 4:
      blinkTestLoop();
      break;
     
    default:
     testCase = 1;        
     break;
  }
}

void periodTestloop{
   colonTube->setState(ColonTube::period);
}

void colonTestLoop{
  colonTube->setState(ConlonTube::colon);
}

void brightnessTestLoop{
  static const brightness = 0;
  
  brightness += .01;
  colonTube->setBrightness(brightness);

  if(brightness >= 1){
    brightness = 0;
  }
}

void blinkTestLoop(){
  colonTube->setBlink(true);
}

#endif
