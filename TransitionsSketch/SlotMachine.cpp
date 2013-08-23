/*
 *  Created on: Jul 6, 2013
 *  Author: michael
 */

#ifndef SLOTMACHINE_H_
#define SLOTMACHINE_H_

#include "Arduino.h"
#include "Transition.h"

class SlotMachine : public Transition
{
    public:
   
    virtual void setNumber(int previous, int next);
};


#endif /* SLOTMACHINE_H_ */
