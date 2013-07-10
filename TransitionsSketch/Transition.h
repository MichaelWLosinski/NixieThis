/*
 *  Created on: Jul 6, 2013
 *  Author: Michael W. Losinski
 */

#ifndef TRANSITION_H_
#define TRANSITION_H_

#include "Arduino.h"
#include "Transition.h"

class Observer;

virtual class Transition
{
    public:
   
    Transition(Observer* observer);
   
    virtual void setNumber(int previous, int next) = 0;
    
    private:
    
    Observer m_observer;
};


#endif /* SLOTMACHINE_H_ */
