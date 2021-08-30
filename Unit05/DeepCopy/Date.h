#pragma once
#include<iostream>
#include<string>

class Date
{
public:
	Date();
	~Date();
	Date(int y, int m, int d);
	int getYear();
	int getMonth();
	int getDay();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
	std::string toString();//function of date to string like : 2021-1-1
private:
	int year = 2021, month = 1, day = 1;
};

