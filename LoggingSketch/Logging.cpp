#include "Logging.h"

void Logging::Init(int level, long baud){
    _level = constrain(level,LOG_LEVEL_NOOUTPUT,LOG_LEVEL_VERBOSE);
    _baud = baud;
    Serial.begin(_baud);
}

void Logging::Error(char* msg, ...){
    if (LOG_LEVEL_ERRORS <= _level) {   
		print ("ERROR: ",0);
        va_list args;
        va_start(args, msg);
        print(msg,args);
    }
}


void Logging::Info(char* msg, ...){
    if (LOG_LEVEL_INFOS <= _level) {
        va_list args;
        va_start(args, msg);
        print(msg,args);
    }
}

void Logging::Debug(char* msg, ...){
    if (LOG_LEVEL_DEBUG <= _level) {
        va_list args;
        va_start(args, msg);
        print(msg,args);
    }
}


void Logging::Verbose(char* msg, ...){
    if (LOG_LEVEL_VERBOSE <= _level) {
        va_list args;
        va_start(args, msg);
        print(msg,args);
    }
}

void Logging::print(const char *format, va_list args) 
{    
  while(*format != 0) 
  {
    ++format
      
    if (*format == '%') 
    {
      ++format;
            
      switch(*format)
      {
        case '\0':
          break;
              
        case '%':
          Serial.print(*format);
          break;            
            
        case 's': 
          {
	    register char *s = (char *)va_arg( args, int );
	    Serial.print(s);	   
   	  }
          break;
          
         case 'd':
         case 'i': 
	   Serial.print(va_arg( args, int ),DEC);
	   break;
	
         case 'x':
	   Serial.print(va_arg( args, int ),HEX);
	   break;
			
         case 'X':         
	   Serial.print("0x");
	   Serial.print(va_arg( args, int ),HEX);
	   break;
	 
         case 'b':
           Serial.print(va_arg( args, int ),BIN);
  	   break;
	
          case 'B':
	    Serial.print("0b");
	    Serial.print(va_arg( args, int ),BIN);
            break;
		
          case 'l':
            Serial.print(va_arg( args, long ),DEC);
	    break;
	
          case 'c':
            Serial.print(va_arg( args, int ));
            break;
		
          case 't':
	    if (va_arg( args, int ) == 1) 
	      Serial.print("T");				
	    else 
	      Serial.print("F");				
            break;
		
		
            case 'T':
              if (va_arg( args, int ) == 1) 
		Serial.print("true");
	      else
                Serial.print("false");				
	      break;			
        }        
        
        Serial.print(*format);
    }
 }
 
 Logging Log = Logging();

 
 
  




