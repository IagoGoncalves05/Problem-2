#include "Student.h"
#include <iostream>
#define quote(x) #x

Student::Student(string name) {
	setName(name);
}

Student::Student(string name, string status) {
	setName(name);
	this->status = status;
}

string Student::toString() const {
	typeid(Student).name();
	return "Name: " + getName() + "\nClass: " + quote(Student);
}