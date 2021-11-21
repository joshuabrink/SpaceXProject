#ifndef PAYLOAD_H
#define PAYLOAD_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Payload
{
public:

/**
*  @fn     Payload()
*  @brief  constructor
*/
	Payload();

/**
*  @fn     Payload()
*  @brief  constructor
* 
* 	@param[in] string, Description
*   @param[in] double, cost
*/
	Payload(string Description,double cost);

/**
*  @fn     Payload()
*  @brief  destructor 
*/
	~Payload();

/**
*  @fn     string getDiscription()
*  @brief  destructor
*/
	string getDiscription();
	double getCost();

	void setDiscription(string);
	void setCost(double);

private:
	double cost;
	string Description;

};

class Supplies : public Payload
{
public:
	Supplies();
	Supplies(string Description, double cost);
	~Supplies();

};

#endif
