#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public: 
  Person();
	Person(string name, string address, string phoneNumber, string email);
	void setName(string name);
	void setAddress(string address);
	void setPhoneNumber(string phoneNumber);
	void setEmail(string email);
	string getName() const;
	string getAddress() const;
	string getPhoneNumber() const;
	string getEmail() const;
	string toString() const;
protected:
	string name;
	string address;
	string phoneNumber;
	string email;

};

#endif

