#pragma once
#include <iostream>

class Square
{
public:
	Square();
	~Square();
	Square(double side) {//有参ctor
		this->side = side;
		numberOfObjects++;
	}

	Square(const Square& s) {//const用于保证s在函数体内不被修改
		this->side = s.side;
		numberOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	}

	double getArea() {//成员函数：获取面积
		return (side * side);
	}
	double getSide() {//成员函数：获取边长
		return side;
	}
	static int getNumberOfObjects() {//静态成员函数，只能处理静态成员
		//side++;//错误，不能处理非静态成员
		return numberOfObjects;
	}
	int getNumberOfObjects_nonstatic() {//非静态成员函数，只能通过对象访问
		return numberOfObjects;
	}
private:
	double side = 1.0;
	static int numberOfObjects;
};

Square::Square() :Square(1.0)
{
}

Square::~Square()
{
	numberOfObjects--;
}

//int Square::numberOfObjects{ 0 };
//const类型的静态成员可以原地初始化，非const需要类外初始化，为防止出错一般都类外