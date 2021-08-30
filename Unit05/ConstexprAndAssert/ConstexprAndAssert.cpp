//����1:�õݹ����factorial,��assert���3�Ľ׳�
//����2:��factorial��ɳ������ʽ����static_assert���3�Ľ׳�;
//����3:����factorial(4)��С������

#include <iostream>
#include<array>
#include<cassert> 


using std::cout;
using std::cin;
using std::endl;

constexpr int factoral(int n) {//�׳�
	if (n == 0) {
		return 1;//error:2; right:1
	}
	else {
		return n * factoral(n - 1);
	}
}


int main() {

	int x = 3;
	auto y = factoral(x);
	static_assert(factoral(3) == 6, "factorial(3) should be 6");//c++11������
	assert(y == 6);//����
	//cout << "3!=" << y << endl;  
	static_assert(factoral(4) == 24, "factorial(4) should be 24");
	std::array<int, factoral(4)> a;
	cout << a.size();

	return 0;
}
