#ifndef RGBLEDIMPL_H_
#define RGBLEDIMPL_H_

#include "Arduino.h"
#include "RgbLed.h"

/**
 * A Red Green and Blue Light Emitting Diode
 *
 * @Author Michael W. Losinski
 * @Created Jul 8, 2013
 */
class RgbLedImpl : public RgbLed
{
public:

  RgbLedImpl(int redPin, int greenPin, int bluePin, char color[3], float brightness = 1);

  virtual void setColor(char value[3]);
  virtual void setBrightness(float value);

private:

  void Update();

  int m_redPin;
  int m_greenPin;
  int m_bluePin;  
};

#endif
