#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(double w, double h, Color color_, bool filled_);
	~Rectangle();
	double getWidth() const;//��������const��ʾ���øú���ʱ�����޸��ڲ���˽�г�Ա��   
	double getHeight() const;
	void setWidth(double w);
	void setHeight(double h);
	double getArea();
	string toString();

private:
	double width{ 1.0 };
	double height{ 1.0 };

};
