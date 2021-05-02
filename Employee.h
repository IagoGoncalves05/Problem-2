#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Person.h"
#include "MyDate.h"

class Employee: public Person {
public:
	Employee(string name);
	Employee(string name, double salary, string office, MyDate date);
	void setSalary(double salary);
	void setOffice(string office);
	void setDateHired(MyDate datehired);
	double getSalary();
	string getOffice();
	MyDate getDateHired();
	string toString() const;
protected:
	double salary;
	string office;
	MyDate dateHired;

};
#endif

