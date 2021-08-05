#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int* p = nullptr;
	int* q{ nullptr };
	p = new int(42);
	q = new int[4];
	for (size_t i = 0; i < 4; i++)
	{
		q[i] = i;
		cout << "q" << i << "=" << q[i] << endl;
	}
	delete p;
	delete[]q;
	cin.get();
	return 0;
}