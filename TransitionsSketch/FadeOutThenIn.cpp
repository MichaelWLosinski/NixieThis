#include "FadeOutThenIn.h"

FadeOutThenIn::FadeOutThenIn(Observer* observer, int transitionTime)
: Transition(observer, transitionTime),
  m_delta(1/(transitionTime / 30HZ)

void FadeOutThenIn::setNumber(int previous, int next
{
  m_dimming = TRUE;
  Transition::setNumber(previous, next);
}
  
void update()
{
  if(m_dimming && (0 <= m_brightness))
  {
    m_dimming = FALSE;
  }
  
  m_brightness = dimming ? (m_brightness -= m_delta) : (m_brightness += m_delta);
  m_observer->notify(dimming ? m_previous : m_next, m_brightness);
}
