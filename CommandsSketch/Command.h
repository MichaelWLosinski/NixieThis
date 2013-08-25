#ifndef COMMAND_H_
#define COMMAND_H_

/**
 * @Author Michael W. Losinski
 * @Created on: Mar 27, 2013
 */
class Command
{
  public:
  
  Command(ReceiverInterface *receiver);

  virtual bool interpret(char[] message) = 0;
};

#endif
