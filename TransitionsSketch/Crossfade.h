/*
 *  Created on: Jul 6, 2013
 *  Author: michael
 */

#ifndef CROSSFADE_H_
#define CROSSFADE_H_

#include "Arduino.h"
#include "Transition.h"

class Crossfade : public Transition
{
  public:
  
  Crossfade(Observer* observer, int transitionTime);
  virtual void setNumber(int previous, int next);
  
  private:
  
  byte m_toggle;
  float m_delta;
};

#endif
