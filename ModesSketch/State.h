#ifndef STATE_H
#define STATE_H

/*
 * Interface of the clock states
 * 
 * @Author: Michael W. Losinski
 * @Created: Jul 6, 2013
 */
class State
{
  public:
 
  virtual void setActive(bool value) = 0;  
};

#endif
