#ifndef CLOCK_H_
#define CLOCK_H_

#include "State.h"
/**
 * Click mode for the nixie tube clock
 *
 * @Author Michael W. Losinski
 * @Created Mar 27, 2013
 */
class Clock : public State
{
public:
  
  Clock();
  
  void setTime(int hr, int mn, int sec);
  virtual void setActive(bool value);  
};
#endif
