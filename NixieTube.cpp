#include "NixieTube.h"

NixieTube::NixieTube(int number, float value)
: m_number(number),
  m_brightness(brightness)
{

}

NixieTube::setNumber(int value)
{
	PRECONDITION(0 <= value && value <= 9);
	m_number = value;
	POSCONDITION(m_value = value);
}

NixieTube::setBrightness(float value)
{
	PRECONDITION(0 <= value && value <= 1);
	m_brightness = value;
	POSTCONDITION(m_brightness = value);
}
