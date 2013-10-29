#include "ColonTubeImpl.h"
#include "ColonTube.h"

ColontubeImpl::ColonTubeImpl(int topPin, int bottomPin, int brightnessPin)                            
: ColonTube(),
  m_topPin(a),
  m_bottomPin(b),
  m_brightnessPin(brightnessPin)
{
  pinMode(m_topPin, OUTPUT);
  pinMode(m_bottomPin, OUTPUT);

  pinMode(m_brightnessPin, OUTPUT);
}

void ColonTubeImpl::setNumber(State value){
  ColonTube::setNumber(number);

  digitalWrite(m_topPin, ColonTube::colon == state);
  digitalWrite(m_bottomPin, ColonTube::off != state);
}

void ColonTubeImpl::setBrightness(float value){
  ColonTube::setBrightness(value);

  analogWrite(m_brightnessPin, (int) m_brightness * 255);
}
