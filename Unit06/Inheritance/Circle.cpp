#include "Circle.h"

Circle::Circle()//���캯��ʵ�֣����캯�������������޷���ֵ���ɲ��������������أ�����ͬ��
{
	radius = 1.0;
}
Circle::Circle(double radius_, Color color_, bool filled_) :Shape{ color_ , filled_ } {//��������û����Ctor
	radius = radius_;
}
double Circle::getArea() {//���Ա����������ֱ��ʵ���Զ���Ϊ��������
	return radius * radius * 3.1415926535;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}
