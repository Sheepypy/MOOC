#include <iostream>
#include "Square.h"

using std::cout;
using std::cin;
using std::endl;

int Square::numberOfObjects{ 10 };//不初始化的话编译器自动赋值0
int main() {
	Square s1;
	Square* p1 = &s1;
	Square& r1 = s1;
	//静态成员（函数）的访问方式有四种：
	cout << s1.getNumberOfObjects() << endl;//<实例对象名>.<成员名>
	cout << Square::getNumberOfObjects() << endl;//<类名> ::<成员名>
	cout << p1->getNumberOfObjects() << endl;//<对象指针名> -> <成员名>
	cout << r1.getNumberOfObjects() << endl;//<对象引用名>.<成员名>
	cout << endl;
	Square s2{ 2 };
	cout << Square::getNumberOfObjects() << endl;
	cout << s2.getNumberOfObjects_nonstatic() << endl;
	//cout << Square::getNumberOfObjects_nonstatic() << endl;//error，非静态成员函数必须与特定对象相对应，不能通过类名调用
	//cout << Square::numberOfObjects << endl;//error，私有类成员不能直接访问
	return 0;
}

