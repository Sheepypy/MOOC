#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(double w, double h, Color color_, bool filled_);
	~Rectangle();
	double getWidth() const;//常函数：const表示调用该函数时不会修改内部的私有成员；   
	double getHeight() const;
	void setWidth(double w);
	void setHeight(double h);
	double getArea();
	string toString();

private:
	double width{ 1.0 };
	double height{ 1.0 };

};
