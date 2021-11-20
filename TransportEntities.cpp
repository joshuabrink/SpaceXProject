#include "TransportEntities.h"

TransportEntities::TransportEntities(){

}

TransportEntities::~TransportEntities(){

}


Cargo::Cargo(){

}

Cargo::Cargo(string Description) {
	this->Description = Description;
	cout << "Adding Cargo: " << getDescription() << endl;
}

Cargo::~Cargo(){

}


string Cargo::getDescription() {
	return this->Description;
}

Crew::Crew(){

}

Crew::Crew(string name, string jobDescription) {
	this->name = name;
	this->jobDescription = jobDescription;
	cout << "Adding crewmember: " << getName() <<", job description: "<< getJobDescription() << endl;
}

Crew::~Crew()
{
}

string Crew::getName() {
	return this->name;
}

string Crew::getJobDescription() {
	return this->jobDescription;
}