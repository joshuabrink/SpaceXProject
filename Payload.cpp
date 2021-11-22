#include "Payload.h"

Payload::Payload(){
	this->Description = "";
	this->cost = 0;
}

Payload::Payload(string Desc, double C) {
	this->Description = Desc;
	this->cost = C;
}

Payload::~Payload(){

}

string Payload::getDiscription() {
	return Description;
};

double Payload::getCost() {
	return cost;
};

void Payload::setDiscription(string Desc) {
	this->Description = Desc;
};

void Payload::setCost(double C) {
	this->cost = C;
};


Supplies::Supplies(){

}

Supplies::Supplies(string Description, double cost) : Payload(Description, cost){
	cout << "Creating supplies at cost " << fixed << setprecision(2) << getCost() << ", description: " << getDiscription() << endl;
}

Supplies::~Supplies(){

}


Satellite::Satellite(){

}

Satellite::Satellite(string Description, double cost) : Payload(Description, cost){
	cout << "Creating satellite at cost " << fixed << setprecision(2) << getCost() << ", description: " << getDiscription() << endl;
}

Satellite::~Satellite(){

}