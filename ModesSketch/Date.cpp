#include "Date.h"

Date::Date()
{
  
}

void Date::setTime(int d, int m, int y)
{
  int h = Hour();
  int m = Minute();
  int s = Second();
  
  SetTime(h, m, s, d, m, y);

  log.info("Time set hour: %d minute: %d second: %d day: %d month: %d year: %d", h, m, s, d, m, y);   
}


