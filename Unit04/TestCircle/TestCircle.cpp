#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Circle
{
public:
	Circle();//构造函数声明
	~Circle();//析构函数声明
	double radius;//类数据域
	Circle(double r) {//带参数的构造函数
		radius = r;			
	}
	double getArea() {//类成员函数，类中直接实现自动成为内联函数
		return radius * radius *3.1415926535;
	}
private:

};

Circle::Circle()//构造函数实现，构造函数和析构函数无返回值，可不带参数，可重载，与类同名
{
		radius = 1.0;
}

Circle::~Circle()//析构函数实现
{
}

int main() {
	Circle c1;
	Circle c2(2.0);
	Circle c3{ 2.0 };
	Circle c4 = { 2.0 };
	//Circle c4 = ( 2.0 );// 可行，不规范
	auto c5 = Circle{ 2. };//用匿名对象赋值
	//auto c5 = Circle(2.0);
	decltype (c5) c6;
	//decltype (c5) c6{ 2.0 };
	//decltype (c5) c6(2.0);
	//decltype (c5) c6 = { 2.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	cout << c3.getArea() << endl;
	cout << c4.getArea() << endl;
	cout << c5.getArea() << endl;
	cout << c6.getArea() << endl;
	return 0;
}
