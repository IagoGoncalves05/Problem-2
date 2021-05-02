#include "Employee.h"
#include <iostream>
#define quote(x) #x

Employee::Employee() {}
Employee::Employee(string name) {
	setName(name);
}

Employee::Employee(string name, double salary, string office, MyDate date) {
	setName(name);
	this->salary = salary;
	this->office = office;
	this->dateHired = date;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

void Employee::setOffice(string office) {
	this->office = office;
}

void Employee::setDateHired(MyDate dateHired){
	this->dateHired = dateHired;
}

double Employee::getSalary() {
	return salary;
}

string Employee::getOffice() {
	return office;
}

MyDate Employee::getDateHired() {
	return dateHired;
}

string Employee::toString() const {
	typeid(Employee).name();
	return "Name: " + getName() + "\nClass: " + quote(Employee);
}

