#ifndef RGBLED_H_
#define RGBLED_H_

#include "Arduino.h"

/**
 * A Red Green and Blue Light Emitting Diode
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 */
class RgbLed
{
public:

  RgbLed(char color[3], float brightness = 1);

  virtual void setColor(char value[3]);
  virtual void setBrightness(float value);

protected:

  char m_color[3];
  float m_brightness;
};

#endif
