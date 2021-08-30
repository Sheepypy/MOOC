#pragma once
class Square
{
public:
	Square();
	~Square();
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	double getArea() {
		return (side * side);
	}
	double getSide() {
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

Square::Square():Square(1.0)
{
}

Square::~Square()
{
	numberOfObjects--;
}

//int Square::numberOfObjects{ 0 };
//const类型的静态成员可以原地初始化，非const需要类外初始化，为防止出错一般都类外