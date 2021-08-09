#include <iostream>
#include "Circle.h"
#include <array>

using std::cout;
using std::cin;
using std::endl;

int main() {
	Circle* pc1 = new Circle{ 1.0 };// 堆中创建对象；Circle* 等效于 auto 等效于auto *
	Circle c2{ 2.0 };
	Circle* pc2 = &c2;//对象指针
	cout << pc1->getArea() << endl;
	cout << c2.getArea() << endl;
	cout << pc2->getArea() << endl;
	cout << endl;
	Circle c3[3]{ 1.0,2.0,3.0 };//对象数组
	for (auto i = 0; i < 3; i++)
	{
		cout << c3[i].getArea() << endl;
	}
	cout << endl;
	auto pc3 = new Circle[3]{ 1.0,2.0,3.0 };//堆中创建对象数组；auto 等效于Circle*
	for (auto i = 0; i < 3; i++)
	{
		cout << pc3[i].getArea() << endl;
	}
	cout << endl;

	int a1[3]{ 0, 1, 2 };//C style
	std::array <int, 3> a2{ 0, 1, 2 }; //c++ style
	for (auto i : a1) {
		cout << c3[i].getArea() << endl;
	}
	cout << endl;
	for (auto i : a2) {
		cout << pc3[i].getArea() << endl;
	}
	return 0;
}
