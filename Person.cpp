#include "Person.h"
#include <iostream>
#define quote(x) #x

Person::Person() {
	name = address = phoneNumber = email = "";
}

Person::Person(string name, string address, string phoneNumber, string email) {
	this->name = name;
  this->address = address;
  this->phoneNumber = phoneNumber;
  this->email = email;
}

void Person::setName(string name) {
	this->name = name;
}

void Person::setAddress(string address) {
	this->address = address;
}

void Person::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Person::setEmail(string email) {
	this->email = email;
}

string Person::getName() const {
	return name;
}

string Person::getAddress() const {
	return address;
}

string Person::getPhoneNumber() const {
	return phoneNumber;
}

string Person::getEmail() const {
	return email;
}

string Person::toString() const{
  typeid(Person).name();
	return "Name: " + getName() + "\nClass: " + quote(Person);
}	