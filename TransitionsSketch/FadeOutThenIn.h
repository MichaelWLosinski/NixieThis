/*
 *  Created on: Jul 6, 2013
 *  Author: michael
 */

#ifndef FADE_OUT_THEN_IN_H_
#define FADE_OUT_THEN_IN_H_

#include "Arduino.h"
#include "Transition.h"

class FadeOutThenIn : public Transition
{
  public:
   
  FadeOutThenIn(Observer* observer, int transitionTime);
  virtual void setNumber(int previous, int next);
  
  private:
  
  float m_delta;
  int dimming;
};


#endif
