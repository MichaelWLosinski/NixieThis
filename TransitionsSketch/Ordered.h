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
   
    virtual void setNumber(int previous, int next);
};


#endif
