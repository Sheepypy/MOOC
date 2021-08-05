#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int a;
	cout << "please input a number:" << endl;
	cin >> a;
	cout << (a += 2) << endl;
	return 0;
}