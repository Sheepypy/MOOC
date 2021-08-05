#include<iostream>//<>系统头文件
#include"Circle.h"//""自定义头文件

using std::cout;
using std::endl;

int main() {
	Circle c1;
	Circle c2(2.0);

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return 0;
}
