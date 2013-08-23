#include "Crossfade.h"

Crossfade::Crossfade(Observer *observer, int transitionTime)
:Transition(observer),
 m_toggle(0),
 m_delta(1 /(transitionTime / 30HZ))
{
  
}

void Crossfade::setNumber(int previous, int next)
{
  m_toggle = 0x00;
  m_timer.enable(m_timerId);

  Transition::setNumber(int previous, int next);  
}

void Crossfade::update()
{ 
  float m_brightness = m_brightness - m_delta;
  toggle ^= 0x01;
  
  if(m_toggle)
  {
    m_observer->notify(m_next,1 - m_brightness);
  }
  else
  {
    m_observer->notify(m_previous, m_brightness);   
  }
 
  if(0 <= m_brightness)
  {
    m_observer->notify(m_next, 1);//Just in case floating point math didn't work and to ensure we end on the right number   
    timer.disable(m_timerId);
  }
}
