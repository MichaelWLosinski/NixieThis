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
 
 typedef int Sate;
 const int State period = 0;
 const int State colon = 0;
 const int State off = 0;
 
 /**
  * @param number: the initial number to be shown on the nixie tube
  * @param brightness: the percent of brightness for the nixie tube
  */
  ColonTube();

 /**
  * The allowed states of the colon tube
  * @param State 
  */
  virtual void setState(State value);

 /**
  * Sets the brightness of the tube
  * @param 0 <= value <= 1
  */
  virtual void setBrightness(float value);

 /**
  * Sets the tube to blink
  */
  virtual void setBlink(bool value;
  
protected:

  State m_state;
  float m_brightness;
  bool m_blink;
};

#endif
