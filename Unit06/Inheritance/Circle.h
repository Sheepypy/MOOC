#pragma once
#include "Shape.h"
class Circle : public Shape
{
	double radius;//c++��Ĭ�Ϸ�������Ϊprivate�������޷�����
public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);

private:

};