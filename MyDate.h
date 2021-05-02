#ifndef MYDATE_H
#define MYDATE_H
#include <string>
#include <ctime>

class MyDate {
private:
	int year;
	int month;
	int day;

public:

	MyDate();
	MyDate(int year, int month, int day);
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	int getYear();
	int getMonth();
	int getDay();
};

#endif

