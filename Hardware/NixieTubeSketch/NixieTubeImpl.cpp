#include "NixieTubeImpl.h"

NixieTubeImpl::NixieTubeImpl(int number, float brightness, int a, int b, int c, int d, int brightnessPin)                            
: NixieTube(number, brightness),
  m_a(a),
  m_b(b),
  m_c(c),
  m_d(d),
  m_brightnessPin(brightnessPin)
{
  pinMode(m_a, OUTPUT);
  pinMode(m_b, OUTPUT);
  pinMode(m_c, OUTPUT);
  pinMode(m_d, OUTPUT);

  pinMode(m_brightnessPin, OUTPUT);
}

void NixieTubeImpl::setNumber(int number){
  NixieTube::setNumber(number);

  digitalWrite(m_a, m_number & 0x01);
  digitalWrite(m_b, m_number & 0x02);
  digitalWrite(m_c, m_number & 0x04);
  digitalWrite(m_d, m_number & 0x08);
}

void NixieTubeImpl::setBrightness(float value){
  NixieTube::setBrightness(value);

  analogWrite(m_brightnessPin, (int) m_brightness * 255);
}
