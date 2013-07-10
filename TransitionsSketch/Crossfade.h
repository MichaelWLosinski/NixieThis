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
  
  virtual void setNumber(int previous, int next);
};

#endif
