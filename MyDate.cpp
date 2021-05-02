#include "MyDate.h"

MyDate::MyDate() {
	year = month = day = 0;
}
MyDate::MyDate(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

void MyDate::setYear(int year) {
	this->year = year;
}

void MyDate::setMonth(int month) {
	this->month = month;
}

void MyDate::setDay(int day) {
	this->day = day;
}

int MyDate::getYear() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int year = 1900 + newtime.tm_year;
	return year;
}

int MyDate::getMonth() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int month = 1 + newtime.tm_mon;
	return month;
}

int MyDate::getDay() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int day = newtime.tm_wday;
	return day;
}