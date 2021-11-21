#ifndef PAYLOAD_H
#define PAYLOAD_H

/** @file Payload.h
 *  @class Payload
 *  @brief Payload is the product in the Factory method design pattern
 *
 *  @class Supplies
 *  @brief Supplies is the concrete product in the Factory method design pattern
 * 
 *  @author Anru Nel
 *  @bug No known bugs.
 */

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
	*  @param[in] string, Description
	*  @param[in] double, cost
	*/
	Payload(string Description, double cost);

	/**
	*  @fn     ~Payload()
	*  @brief  destructor
	*/
	~Payload();

	/**
	*  @fn     string getDiscription()
	*  @brief  get the descriptions
	* 
	*  @return string
	*/
	string getDiscription();

/**
*	@fn  double getCost();
*	@brief  return the cost
*
*	@return double
*/
	double getCost();

/**
*	@fn  void setDiscription(string);
*	@brief  set the description
* 
*   @param[in] string, cost
* 
*	@return void
*/
	void setDiscription(string);

/**
*	@fn  double getCost();
*	@brief  set the cost
* 
*   @param[in] double, cost
* 
*	@return void
*/
	void setCost(double);

private:
	double cost;
	string Description;

};

class Supplies : public Payload
{
public:
/**
*  @fn     Supplies()
*  @brief  constructor
*/
	Supplies();

/**
*  @fn     Supplies()
*  @brief  constructor
*
*   @param[in] string, Description
*   @param[in] double, cost
*/
	Supplies(string Description, double cost);

/**
*  @fn     ~Supplies()
*  @brief  destructor
*/
	~Supplies();

};

class Satellite : public Payload
{
public:
/**
*  @fn     Satellite()
*  @brief  constructor
*/
	Satellite();
	
/**
*  @fn     Satellite()
*  @brief  constructor
*
*   @param[in] string, Description
*   @param[in] double, cost
*/
	Satellite(string Description, double cost);
	
/**
*  @fn     Satellite()
*  @brief  destructor
*/
	~Satellite();
}
#endif
