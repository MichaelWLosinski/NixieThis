#include "None.h"

None::None(Observer* observer)
: Transition(observer, 0)
{
  
}

void None::setNumber(int previous, int next)
{
  m_observer->setNumber(next, 1);
}
