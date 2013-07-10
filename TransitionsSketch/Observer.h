/*
 *  Created on: Jul 6, 2013
 *  Author: Michael W. Losinski
 */

#ifndef OBSERVER_H
#define OBSERVER_H

#include "Arduino.h"

class Observer 
{
    public:
   
    virtual void notify(int value);
};

#endif 
