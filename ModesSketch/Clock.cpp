#include "Clock.h"

#include <Time.h>

Clock::Clock(NixieTube *tubes[])
: m_tubes(tubes)
{

}

void Clock::Update()
{
  if(timeStatus() != timeNotSet)
  {
    int hour = Hour();
    int minute = Minute();
    int second = Second();

    tube[0]->setNumber(hour / 10);
    tube[1]->setNumber(hour % 10);
    tube[2]->setNumber(minute / 10);
    tube[3]->setNumber(minute % 10);
    tube[4]->setNumber(second / 10);
    tube[5]->setNumber(second % 10);
  }
  else
  {
    log.info("time not set");
  }
}

void Clock::setTime(int hr, int mn, int sec)
{
  int d = Day();
  int m = Month();
  int y = Year();
  
  SetTime(hr, mn, sec, d, m, y);

  log.info("Time set hour: %d minute: %d second: %d day: %d month: %d year: %d", hr mn, sec, d, m, y);   
}
