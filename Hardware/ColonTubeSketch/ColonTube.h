#ifndef COLONTUBE_H_
#define COLONTUBE_H_

#include "Arduino.h"

/**
 * Represents the capabilities of a nixie tube
 *
 * @Author Michael W. Losinski
 * @Created Jul 10, 2013
 */
class ColonTube
{
public:

 /**
  * @param number: the initial number to be shown on the nixie tube
  * @param brightness: the percent of brightness for the nixie tube
  */
  NixieTube(int number, float value);

 /**
  * Sets the nixie tubes digit.
  * @param 0 <= value <= 9
  */
  virtual void setNumber(int value);

 /**
  * Sets the brightness of the tube
  * @param 0 <= value <= 1
  */
  virtual void setBrightness(float value);

protected:

  int m_number;
  float m_brightness;
};

#endif
