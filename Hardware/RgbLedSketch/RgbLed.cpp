#include "RgbLed.h"


RgbLed::RgbLed(char color[3], float brightness)
: m_brightness(brightness)
{
  strcpy(m_color, color);//TODO initilizer
}

void RgbLed::setColor(char value[3])
{
  strcpy(m_color, value); 
}

void RgbLed::setBrightness(float value)
{
  m_brightness = value;  
}

