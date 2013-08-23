/*
 *  Created on: Jul 6, 2013
 *  Author: Michael W. Losinski
 */

#ifndef TRANSITION_H_
#define TRANSITION_H_

#include "Arduino.h"
#include "Transition.h"
#include "SimpleTimer.h"

SimpleTimer m_timer;//must be called in main loop to update all timers

class Observer;

#define 30HZ  33

virtual class Transition
{
    public:
   
    Transition(Observer* observer);
    virtual void setNumber(int previous, int next) 
    
    protected:
    
    virtual void update();
    
    Observer *m_observer;
    int m_timerId;
    int m_previous;
    int m_next;
};

#endif 
