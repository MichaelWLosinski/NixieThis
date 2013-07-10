#ifndef COMMAND_H_
#define COMMAND_H_

class Command
{

protected:

	virtual bool interpret(char[] message) = 0;
};

#endif
