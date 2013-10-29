#ifndef WEATHER_STATE_H
#define WEATHER_STATE_H

#include "State.h"

class Weather : State
{
  public:
  
  Weather();
  
  void setCurrent(double temp, double humidity, double rainChance);
  void setActive(bool value);
  
  private:

  double m_temp;
  double m_humidity;
  double m_rainChance; 
};
#endif
