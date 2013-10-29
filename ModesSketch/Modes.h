#ifndef MODES_H
#define MODES_H

#include "ReceiverInterface.h"

/*
 * The clock has several modes: weather, time, date
 * 
 * @Author: Michael W. Losinski
 * @Created: Jul 6, 2013
 */
class Modes : public ReceiverInterface
{
public:
  
  Modes();
  
  void addMode(State *state)
  void setActiveModeMode(State *mode);

private:

  std::vector<State*> m_stateList;
};

#endif
