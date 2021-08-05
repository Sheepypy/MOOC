#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swapByValue(int x, int y) {
	int t = 0;
	t = x; 
	x = y; 
	y = t;
}

void swapByPoint(int*x, int*y) {
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}

void swapByReference(int&x, int&y) {
	int t = 0;
	t = x; 
	x = y; 
	y = t;
}

int main() {
	int a1{ 1 }, b1{ 2 },a2{ 1 }, b2{ 2 },a3{ 1 }, b3{ 2 };
	cout << "before swapByValue" << endl;
	cout << "ai=1,bi=2" << endl;
	swapByValue(a1, b1);
	swapByPoint(&a2, &b2);
	swapByReference(a3, b3);
	cout << "after swapByValue" << endl;
	cout << "a1=" << a1 << "," << "b1=" << b1 << endl;
	cout << "after swapByPoint" << endl;
	cout << "a2=" << a2 << "," << "b2=" << b2 << endl;
	cout << "after swapByReference" << endl;
	cout << "a3=" << a3 << "," << "b3=" << b3 << endl;
	cin.get();
	return 0;
}