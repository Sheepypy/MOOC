#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Circle
{
public:
	Circle();
	~Circle();
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
private:
	double radius;
};

Circle::Circle()
{
	radius = 1;
}

Circle::~Circle()
{
}

class Square
{
public:
	Square();
	~Square();
	Square(double side_) : side{ side_ } { }
	double getArea() {
		return side * side;
	}
private:
	double side;
};

Square::Square()
{
	side = 1;
}

Square::~Square()
{
}

class Combo
{
public:
	Combo();
	~Combo();
	Circle c;
	Square s;
private:

};

Combo::Combo() :c{ 2 }, s{ 2 }//��ʼ���б�
{
	c = { 4 };//�˴������б��ʼ����ֻ�ܸ�ֵ
	s = { 4 };
}

Combo::~Combo()
{
}
int main() {
	Combo o{};
	cout << o.c.getArea() << endl;
	cout << o.s.getArea() << endl;
  return 0;
}
