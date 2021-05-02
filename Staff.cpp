#include "Staff.h"
#include <iostream>
#define quote(x) #x

Staff::Staff(string name, string title) {
	setName(name);

	this->title = title;
}

void Staff::setTitle(string title) {
	this->title = title;
}

string Staff::getTitle() {
	return title;
}

string Staff::toString() const {
	typeid(Staff).name();
	return "Name: " + getName() + "\nClass: " + quote(Staff);
}

