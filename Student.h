#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;

class Student: public Person
{
public:
	const string FRESHMAN = "Freshman";
	const string SOPHOMORE = "Sophomore";
	const string JUNIOR = "Junior";
	const string SENIOR = "Senior";
	Student(string name);
	Student(string name, string status);
	string toString() const;
protected:
	string status;

};
#endif 

