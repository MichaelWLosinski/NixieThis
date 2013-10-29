
#include "NixieTubeImpl.h"
#include "ColonTubeImpl.h"
#include "RgbLed.h"

NixieTubeImpl tube1;
NixieTubeImpl tube2;
NixieTubeImpl tube3
NixieTubeImpl tube4;
NixieTubeImpl tube5;
NixieTubeImpl tube6;

ColonTubeImpl colon1;
ColonTubeImpl colon2;

RgbLed leds[8];//Leds are below each tube and colon

Clock clock(tubes, colons, leds);
Date date;
Weather weather;
Modes modes(&clock, &date, &weather);

void setup(){
  
}

void loop(){
  
}
