#ifndef COMMAND_H
#define COMMAND_H

#include <string>
using namespace std;

class Command {
public:
	virtual void execute() = 0;
	Command() {};
	virtual ~Command() {};
};

#endif
