#include "NixieTube.H"

NixieTube h_msb();
NixieTube h_lsb();
ColonTube h_m();
NixieTube m_msb();
NixieTube m_lsb();
ColonTube m_s();
NixieTube s_msb();
NixieTube s_lsb();

Modes modes();
void setup(){
 NixieTube *nixieTubes[6];
 ColonTube *colonTubes[2];
 
 //HH:MM:SS
 nixieTubes[0] = &h_msb; 
 nixieTubes[1] = &h_lsb;
 colon[0] = &h_m;
 nixieTubes[2] = &m_msb;
 nixieTubes[3] = &m_lsb;
 colon[1] = &m_s;
 nixieTubes[4] = &s_msb;
 nixieTubes[5] = &s_lsb;
 
 modes->setNixieTubes(nixieTubes);
 modes->setColonTubes(colonTubes);
 modes->setMode(CLOCK); 
}

void run(){
  
}
