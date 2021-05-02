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

	return year;
}

int MyDate::getMonth() {
	return month;
}

int MyDate::getDay() {
	return day;
}