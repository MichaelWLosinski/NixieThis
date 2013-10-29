

#define LOG_INFO_ON
#define LOG_WARNING_ON
#define LOG_ERROR_ON
#define LOG_CRITICAL_ON
#include "Logging.h"

void setup(){
  
}

void loop(){
  LOG_INFO("Info test:");
  LOG_WARNING("Warning test:");
  LOG_ERROR("Error test:");
  LOG_CRITICAL("Critical test:");  
}
