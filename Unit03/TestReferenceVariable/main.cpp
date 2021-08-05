#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int x{ 10 };
	cout << "x is:" << x << endl;
	int& rx = x;
	rx++;
	cout << "new x is:" << x << endl;
	cin.get();
	return 0;
}