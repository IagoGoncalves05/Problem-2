#ifndef FACULTY_H
#define FACULTY_H
#include "Employee.h"
#include <string>

class Faculty: public Employee {
public:
    const string LECTURER = "Lecturer";
    const string ASSISTANT_PROFESSOR = "Assistant Professor";
    const string ASSOCIATE_PROFESSOR = "Associate Professor";
    const string PROFESSOR = "Professor";
    Faculty(string name, string officeHours, string rank);
    void setOfficeHours(string officehours);
    void setRank(string rank);
    string getOfficeHours();
    string getRank();
    string toString() const;
protected:
    string officeHours;
    string rank;
};
#endif
