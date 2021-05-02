#ifndef STAFF_H
#define STAFF_H
#include "Employee.h"
#include <string>

class Staff: public Employee {
public:
	Staff(string name, string title);
	void setTitle(string title);
	string getTitle();
	string toString() const;
protected:
	string title;
};

#endif

