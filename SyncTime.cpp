#include "SyncTime.h"

SyncTime::SyncTime()
{

}

int maxDaysPerMonth [] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

virtual bool SyncTime::interpret(char[] message)
{
	bool rVal = false;
	if(strncmp(message, "-Time ", 6))
	{
		int hour;
		int min,
		int sec;
		int day;
		int month;
		int yr;

		//expecting it to be in the format "-Time 12:10:15,6-18-1982"
		if(scanf("%2d:%2d:%2d,%2d-%2d-%4d", hour, min, sec, month, day, yr))
		{
			if(!(0 <= hour && hour <= 24))
			{
				log.Error("Hours out of bounds:" << hour);
			}
			else if(!(0 <= min && min < 60))
			{
				log.Error("Minutes out of bounds:" << min);
			}
			else if(!(0 <= sec) && min < 60)
			{
				log.Error("Seconds out of bounds:" << sec);
			}
			else if(!(0 <= month && month <= 12))
			{
				log.Error("Month is out of bounds:" << month);
			}
			else if(!(0 <= day && day <= maxDaysPerMonth[month]))
			{
				log.Error("Day is out of bounds:" << day);
			}
			else
			{
				setTime(hr, min, sec, day, month, yr);
			}
		}
	}

	return rVal;
}

