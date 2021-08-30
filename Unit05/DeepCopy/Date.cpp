#include "Date.h"
#include<iostream>
#include<string>

Date::Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{
	std::cout << "Date: " << toString() << std::endl; };

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::setYear(int y) {
	year = y;
}

void Date::setMonth(int m) {
	month = m;
}

void Date::setDay(int d) {
	day = d;
}

std::string Date::toString() {
	return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
}//function of date to string like : 2021-1-1

Date::Date()
{
}

Date::~Date()
{
}