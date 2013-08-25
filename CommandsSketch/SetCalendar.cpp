#include "SyncTime.h"

int maxDaysPerMonth [] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

SyncTime::SyncTime(ReceiverInterface *receiver);
: Command(receiver)
{

}

virtual bool SetCaledar::interpret(char[] message){
  bool rVal = false;
  if(strncmp(message, "-Date ", 6)){
    int day;
    int month;
    int yr;

    //expecting it to be in the format "-Date 6-18-82"
    if(scanf("%2d-%2d-%2d", month, day, yr)){
      if(!(0 <= day && day <= maxDaysPerMonth[month])){
        LOG_ERROR("Day is out of bounds:" << day);
      }
      else if(!(0 <= month && month <= 12)){
        LOG_ERROR("Month is out of bounds:" << month);
      }
      else if(!(0 <= yr && yr <= 99){
        LOG_ERROR("Year is out of bounds:" << year);
      }      
      else{
        Calendar* calendar = (Calendar*) m_receiver;
        calendar->setDte(day, month, yr);
        rVal = true;
      }
    }
  }

  return rVal;
}

