#include<iostream>//<>ϵͳͷ�ļ�
#include"Circle.h"//""�Զ���ͷ�ļ�

using std::cout;
using std::endl;

int main() {
	Circle c1;
	Circle c2(2.0);

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return 0;
}
