#include "Transition.h"
#include "Observer.h"

Transition::Transition(Observer* observer)
: m_observer(observer),
  m_timerId(m_timer.setTimeout(30HZ)),
  m_previous(0),
  m_next(0)
{
  
}

Transition::~Transition()
{
  m_timer.disable(m_timerId);  
}

void Crossfade::setNumber(int previous, int next)
{
  m_previous = previous;
  m_next = next;  
}
