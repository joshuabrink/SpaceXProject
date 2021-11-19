#ifndef PAYLOAD_H
#define PAYLOAD_H
#include <iostream>
#include <string>

using namespace std;

class Payload
{
public:
	Payload();
	Payload(string Description,double cost);
	~Payload();

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


class Satellite : public Payload
{
public:
	Satellite();
	Satellite(string Description, double cost);
	~Satellite();

};

#endif
