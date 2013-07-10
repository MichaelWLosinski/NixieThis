/*
 *  Created on: Jul 6, 2013
 *  Author: Michael W. Losinski
 */

#ifndef RANDOM_
#define RANDOM_

#include "Arduino.h"
#include "Transition.h"

class Random : public Transition
{
    public:
   
    virtual void setNumber(int previous, int next);
};

#endif 
