#include "NixieTube.h"
#include "Arduino.h"

ColonTube::ColonTube(int number, float value)
: m_state(ColonTube::off),
  m_brightness(1) 
{

}

void ColonTube::setState(State value) {
  //PRECONDITION(0 <= value && value <= 9);
  m_state = value;
  //POSCONDITION(m_value = value);
}

void ColonTube::setBrightness(float value) {
  //PRECONDITION(0 <= value && value <= 1);
  m_brightness = value;
  //POSTCONDITION(m_brightness = value);
}

void ColonTube::setBlink(bool value){
 m_blink = value;
}
