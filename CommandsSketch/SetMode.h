#ifndef SET_MODE_H
#define SET_MODE_H

class Mode
{
  public:
  
  Mode();
  
  SetMode(Mode* mode);
  
  private:
  
  CurrentMode *m_mode;
};
#endif
