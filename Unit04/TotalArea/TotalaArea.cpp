#include <iostream>
#include "Circle2.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
	//1
	Circle ca1[]{ Circle{1.0}, Circle{2.0}, Circle{3.0} };//原生数组不能用auto
	Circle ca2[]{ 1.0, 2.0, 3.0 };
	ca1[2].setRadius(4.0);
	ca2[1].setRadius(100.0);

	auto area1{ 0.0 };
	auto area2{ 0.0 };
	
	for (int i = 0; i < sizeof(ca1) / sizeof(ca1[0]); i++) {//sizeof:以字节为单位
		cout << ca1[i].getRadius() << endl;
		area1 += ca1[i].getArea();
	}
	for (auto x : ca2) {
		cout << x.getRadius() << endl;
		area2 += x.getArea();
	}
	cout << "area1=" << area1 << endl;
	cout << "area2=" << area2 << endl;

	//2
	//Circle* pca1=new Circle[3]{ Circle{1.0}, Circle{2.0}, Circle{3.0} };
	auto pca1 = new Circle[3]{ 1.0, 2.0, 3.0 };//等效写法
	pca1[2].setRadius(4.0);

	auto area11{ 0.0 };
	for (int i = 0; i < sizeof(ca1) / sizeof(ca1[0]); i++) {//sizeof:以字节为单位
		cout << pca1[i].getRadius() << endl;
		cout << (pca1+i)->getRadius()<<endl;
		area11 += pca1[i].getArea();
	}
	cout << "area1=" << area11 << endl;
	delete[] pca1;
	pca1 = nullptr;
	return 0;
}
