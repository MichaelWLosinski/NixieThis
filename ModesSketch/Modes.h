#ifndef MODES_H
#define MODES_H

class ModesController : public ReceiverInterface
{
public:
  
  enum MODE{
    WEATHER, 
    CLOCK, 
    DATE
  };
  Modes(MODE mode);
  void setMode(Weather *weather, Clock *clock, Date *date, MODE mode);

private:

  Weather *m_weather;
  Clock *m_clock;
  Date *m_date;
};

#endif
