#include "NixieTube.h"
#include "Arduino.h"

ColonTube::ColonTube(int number, float value)
: m_number(number),
  m_brightness(value)
{

}

void ColonTube::setNumber(int value)
{
  //PRECONDITION(0 <= value && value <= 9);
  m_number = value;
  //POSCONDITION(m_value = value);
}

void ColonTube::setBrightness(float value)
{
  //PRECONDITION(0 <= value && value <= 1);
  m_brightness = value;
  //POSTCONDITION(m_brightness = value);
}
