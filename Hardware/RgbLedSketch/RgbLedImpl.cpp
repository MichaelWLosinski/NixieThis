#include "RgbLedImpl.h"
#include "RgbLed.h"
#include "Arduino.h"

RgbLedImpl::RgbLedImpl(int red, int green, int blue, char color[3], float brightness)
: RgbLed(color, brightness),
  m_redPin(red),
  m_greenPin(green),
  m_bluePin(blue)  
{
  
  pinMode(m_redPin, OUTPUT);
  pinMode(m_greenPin, OUTPUT);
  pinMode(m_bluePin, OUTPUT);
}

void RgbLedImpl::setColor(char value[3])
{
  RgbLed::setColor(value);
  Update();
}

void RgbLedImpl::setBrightness(float value)
{
  RgbLed::setBrightness(value);
  Update();  
}


void RgbLedImpl::Update()
{
  analogWrite(m_redPin, (int) m_color[0] * m_brightness);
  analogWrite(m_greenPin, (int) m_color[1] * m_brightness);
  analogWrite(m_bluePin, (int) m_color[2] * m_brightness);
}
