#include "Circle3.h"

Circle::Circle()//构造函数实现，构造函数和析构函数无返回值，可不带参数，可重载，与类同名
{
	radius = 1.0;
}
Circle::Circle(double radius_) {//带参数的构造函数
	radius = radius_;
}
double Circle::getArea() {//类成员函数，类中直接实现自动成为内联函数
	return radius * radius * 3.1415926535;
}

double Circle::getRadius() const {
	return radius;
}

//Circle Circle::setRadius(double radius) {
Circle& Circle::setRadius(double radius) {

	this->radius = radius;
	//return(Circle(radius));
	return(*this);//等效
}
