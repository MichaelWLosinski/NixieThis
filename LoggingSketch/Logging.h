#include <SoftwareSerial.h>

#include <stdio.h>

#define RESET		0
#define BRIGHT 		1
#define DIM		2
#define UNDERLINE 	3
#define BLINK		4
#define REVERSE		7
#define HIDDEN		8

#define BLACK 		0
#define RED		1
#define GREEN		2
#define YELLOW		3
#define BLUE		4
#define MAGENTA		5
#define CYAN		6
#define	WHITE		7

void setTextColor(int color){	
  char command[13];
  sprintf(command, "%c[%d;%d;%dm", 0x1B, BRIGHT, color + 30, BLACK+ 40);
  Serial.print(command);
}

void command(int cmd){
  char command[13]; 
  sprintf(command, "%c[%d;%d;%dm", 0x1B, cmd, WHITE + 30, BLACK+ 40);
  Serial.print(command);
}

#ifdef LOG_INFO_ON
  #define LOG_INFO(msg) Serial.println(msg);
#else
  #define LOG_INFO(msg)
#endif

#ifdef LOG_WARNING_ON
  #define LOG_WARNING(msg) setTextColor(YELLOW); Serial.println(msg); command(RESET);
#else
  #define LOG_WARNING(msg)
#endif

#ifdef LOG_ERROR_ON
  #define LOG_ERROR(msg) setTextColor(RED); Serial.println(msg); command(RESET);
#else
  #define LOG_ERROR(msg) 
#endif

#ifdef LOG_CRITICAL_ON
  #define LOG_CRITICAL(msg) setTextColor(RED); command(BLINK); Serial.println(msg); command(RESET);
#else
  #define LOG_CRITICAL(msg)
#endif
