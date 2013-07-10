#include "NixieTube.h"
#include "Arduino.h"

NixieTube::NixieTube(int number, float value)
: m_number(number),
  m_brightness(value)
{

}

void NixieTube::setNumber(int value)
{
  //PRECONDITION(0 <= value && value <= 9);
  m_number = value;
  //POSCONDITION(m_value = value);
}

void NixieTube::setBrightness(float value)
{
  //PRECONDITION(0 <= value && value <= 1);
  m_brightness = value;
  //POSTCONDITION(m_brightness = value);
}
