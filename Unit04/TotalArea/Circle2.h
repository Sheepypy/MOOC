#pragma once
class Circle
{
	double radius;//c++��Ĭ�Ϸ�������Ϊprivate�������޷�����
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);

private:

};