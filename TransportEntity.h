#ifndef TRANSPORTENTITIES_H
#define TRANSPORTENTITIES_H

#include <iostream>
#include <string>

using namespace std;

class TransportEntity
{
public:
	TransportEntity();
	~TransportEntity();

private:

};


class Cargo :  public TransportEntity
{
public:
	Cargo();
	Cargo(string Description);
	~Cargo();

	string getDescription();

private:
	string Description;
};


class Crew : public TransportEntity
{
public:
	Crew();
	Crew(string name, string jobDescription);
	~Crew();

	string getName();
	string getJobDescription();

private:
	string name;
	string jobDescription;
};


#endif
