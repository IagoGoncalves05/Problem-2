#include "Faculty.h"
#include <iostream>
#define quote(x) #x

Faculty::Faculty(string name, string officeHours, string rank) {
	setName(name);
	this->officeHours = officeHours;
	this->rank = rank;
}
 
void Faculty::setOfficeHours(string officeHours) {
	this->officeHours = officeHours;
}

void Faculty::setRank(string rank) {
	this->rank = rank;
}

string Faculty::getOfficeHours() {
	return officeHours;
}

string Faculty::getRank() {
	return rank;
}

string Faculty::toString() const {
	typeid(Faculty).name();
	return "Name: " + getName() + "\nClass: " + quote(Faculty);
}

