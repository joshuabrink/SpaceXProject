#ifndef COMMAND_H
#define COMMAND_H

#include <string>
using namespace std;

/** @file Command.h
 * @class Command
 * @brief Command is a Command participant in the Command design pattern
 * Command declares an interface for executing an operation.
 * @author Jason Antalis & Joshua Young
 * @bug No known bugs.
*/

class Command {
public:
    /**
     * @fn     virtual void execute() = 0
     * @brief  Pure virtual function which will be implemented by its children
     * @return void.
    */
	virtual void execute() = 0;

    /**
     * @fn    virtual void executeBuild() 
     * @brief virtual function that will be implemented by Build class
     * @return Rocket*, Rocket pointer.
    */
    virtual Rocket* executeBuild() {};
	/**
     * @fn     Command()
     * @brief  A constructor for the Command class
    */
	Command() {};
	/**
     * @fn     virtual ~Command()
     * @brief  A destructor for the Command class
    */
	virtual ~Command() {};
};

#endif
