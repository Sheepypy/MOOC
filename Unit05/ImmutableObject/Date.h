#pragma once
#include<iostream>
#include<string>

class Date
{
public:
	Date();
	~Date();
	Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{};
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	void setYear(int y) {
		year = y;
	}
	void setMonth(int m) {
		month = m;
	}
	void setDay(int d) {
		day = d;
	}
	std::string toString() {
		return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
	}//function of date to string like : 2021-1-1
private:
	int year=2021, month=1, day=1;
};

Date::Date()
{
}

Date::~Date()
{
}