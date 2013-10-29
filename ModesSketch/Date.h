#ifndef DATE_H
#define DATE_H

/*
 * The clock state of the nixie tube clock
 * 
 * @Author: Michael W. Losinski
 */
public Date : public Mode
{
  public:
  
  Date();
  
  setDate(int day, int month, int year);
  virtual void setActive(bool value);  
};

#endif
