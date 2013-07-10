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
class NixieTubeImpl : public NixieTube
{
public:

  /**
  * @param a: pin on micro connected to pinA on the 74741 chip
  * @param b: pin on micro connected to pinB on the 74741 chip
  * @param c: pin on micro connected to pinC on the 74741 chip
  * @param d: pin on micro connected to pinD on the 74741 chip
  * @param brightnessPin the analog pin that PWM controls the brightness
  * @param number: the initial number to be shown on the nixie tube
  * @param brightness: the percent of brightness for the nixie tube
  */
  NixieTubeImpl(int number, float brightness, int a, int b, int c, int d, int brightnessPin);

  virtual void setNumber(int value);
  virtual void setBrightness(float value);

private:

  int m_a;
  int m_b;
  int m_c;
  int m_d;
  int m_brightnessPin;
};

#endif
