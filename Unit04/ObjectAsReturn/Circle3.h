#pragma once
class Circle
{
	double radius;//c++中默认访问属性为private，类外无法访问
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;
	//Circle setRadius(double radius);
	Circle& setRadius(double radius);


private:

};