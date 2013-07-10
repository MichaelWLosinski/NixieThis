/*
 * None.h
 *
 *  Created on: Jul 6, 2013
 *      Author: michael
 */

#ifndef NONE_H_
#define NONE_H_

#include "Arduino.h"
#include "Transition.h"

class None : public Transition
{
    public:
   
    virtual void setNumber(int previous, int next);
};

#endif /* NONE_H_ */
