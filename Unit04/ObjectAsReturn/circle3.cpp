#include "Circle3.h"

Circle::Circle()//���캯��ʵ�֣����캯�������������޷���ֵ���ɲ��������������أ�����ͬ��
{
	radius = 1.0;
}
Circle::Circle(double radius_) {//�������Ĺ��캯��
	radius = radius_;
}
double Circle::getArea() {//���Ա����������ֱ��ʵ���Զ���Ϊ��������
	return radius * radius * 3.1415926535;
}

double Circle::getRadius() const {
	return radius;
}

//Circle Circle::setRadius(double radius) {
Circle& Circle::setRadius(double radius) {

	this->radius = radius;
	//return(Circle(radius));
	return(*this);//��Ч
}
