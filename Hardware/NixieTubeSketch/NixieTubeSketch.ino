#include "NixieTubeImpl.h"

#define pinA 13
#define pinB 12
#define pinC 11
#define pinD 10
#define anodePin 9
#define HZ 1000/50 

NixieTubeImpl nixieTube(9, 1, pinA, pinB, pinC, pinD, anodePin);

void setup(){
}

void loop(){
  //nixieTube.setNumber(9);
  test1Loop();  
  //test2Loop();
  //test3Loop();  
}

/**
 * Iterates through ten digits from 0 to 10 with each digit taking a second
 */ 
void test1Loop(){  
  static int i = 0;
  if(i >= 10)  
  {
    i = 0;
  }
  nixieTube.setNumber(i++);
    
  delay(1000);
}

void test2Loop(){      
  static float fadeAmount = .01;
  static float brightness = 0;
  brightness += fadeAmount;  
  if(brightness > 1.0)
  {
    brightness = 0; 
  }
  nixieTube.setBrightness(brightness);

  delay(10);
}

/**
 * Iterates through ten digits gradualy increasing their brightness from 0% to 100%
 */
void test3Loop(){
 test1Loop();
 test2Loop(); 
}



