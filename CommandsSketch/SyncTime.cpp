#include "SyncTime.h"

SyncTime::SyncTime(ReceiverInterface *receiver);
: Command(receiver)
{

}

virtual bool SyncTime::interpret(char[] message){
  bool rVal = false;
  if(strncmp(message, "-Time ", 6)){
    int hour;
    int min,
    int sec;
    int month;
    int day;3

    //expecting it to be in the format "-Time 12:10:15  6-18-82"
    if(scanf("%2d:%2d:%2d %2d-%2d-%2d", hour, min, sec, month, day, yr)){
      if(!(0 <= hour && hour <= 24)){
        LOG_ERROR("Hours out of bounds:" << hour);
      }
      else if(!(0 <= min && min < 60)){
        LOG_ERROR("Minutes out of bounds:" << min);
      }
      else if(!(0 <= sec) && min < 60){
        LOG_ERROR("Seconds out of bounds:" << sec);
      }
      else if(!(0 <= day && day <= maxDaysPerMonth[month])){
        LOG_ERROR("Day is out of bounds:" << day);
      }
      else if(!(0 <= month && month <= 12)){
        LOG_ERROR("Month is out of bounds:" << month);
      }
      else if(!(0 <= yr && yr <= 99){
        LOG_ERROR("Year is out of bounds:" << year);
      }      
      else{
        Clock* clock = (Clock*) m_receive
        setTime(hr, min, sec, day, month, yr);
        rVal = true;
      }
    }
  }

  return rVal;
}

