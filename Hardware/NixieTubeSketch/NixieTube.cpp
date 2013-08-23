#include "NixieTube.h"
#include "Arduino.h"

NixieTube::NixieTube(int number, float value)
: m_number(number),
  m_brightness(value)
{

}

void NixieTube::setNumber(int value){
  m_number = value;
}

void NixieTube::setBrightness(float value){
  m_brightness = value;
}
