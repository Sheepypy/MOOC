#pragma once
class Circle
{
	double radius;//c++��Ĭ�Ϸ�������Ϊprivate�������޷�����
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;
	//Circle setRadius(double radius);
	Circle& setRadius(double radius);


private:

};