#include "Circle.h"

Circle::Circle()//���캯��ʵ�֣����캯�������������޷���ֵ���ɲ��������������أ�����ͬ��
{
	radius = 1.0;
}
Circle::Circle(double radius_) {//�������Ĺ��캯��
	radius = radius_;
}
double Circle::getArea() {//���Ա����������ֱ��ʵ���Զ���Ϊ��������
	return radius * radius *3.1415926535;
}

