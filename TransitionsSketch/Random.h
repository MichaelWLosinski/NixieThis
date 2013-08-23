/*
 *  Created on: Jul 6, 2013
 *  Author: Michael W. Losinski
 */

#ifndef RANDOM_H_
#define RANDOM_H_

#include "Arduino.h"
#include "Transition.h"

class Random : public Transition
{
  public:
   
  Random(Observer* observer, int transitionTime, int count);
  
  virtual void setNumber(int previous, int next);
};

#endif 
