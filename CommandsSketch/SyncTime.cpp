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

    //expecting it to be in the format "-Time 12:10:15"
    if(scanf("%2d:%2d:%2d", hour, min, sec)){
      if(!(0 <= hour && hour <= 24)){
        LOG_ERROR("Hours out of bounds:" << hour);
      }
      else if(!(0 <= min && min < 60)){
        LOG_ERROR("Minutes out of bounds:" << min);
      }
      else if(!(0 <= sec) && min < 60){
        LOG_ERROR("Seconds out of bounds:" << sec);
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

