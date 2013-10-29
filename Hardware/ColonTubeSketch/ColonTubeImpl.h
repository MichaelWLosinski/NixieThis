#ifndef NIXIETUBEIMPL_H_
#define NIXIETUBEIMPL_H_

#include "Arduino.h"
#include "NixieTube.h"

/**
 * This particular implementation uses four pins to control a 74741N chip that is connected to a nixie tube
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 */
class ColonTubeImpl : public ColonTube{
public:

  /**
  * @param bPin the on/off pin that controls the bottom of the colon tube
  * @param tPin the on/off pin that controls the top of the colon tube
  * @param fPin the analog pin that PWM controls the brightness
  */
  ColonTubeImpl(bottomPin, int topPin, int brightnessPin);

  virtual void setNumber(int value);
  virtual void setBrightness(float value);
  virtual void setBlink(bool value);

private:

  int m_topPin;
  int m_bottomPin;
  int m_brightnessPin;
};

#endif
