//任务1:用递归计算factorial,用assert检查3的阶乘
//任务2:将factorial变成常量表达式，用static_assert检查3的阶乘;
//任务3:创建factorial(4)大小的数组

#include <iostream>
#include<array>
#include<cassert> 


using std::cout;
using std::cin;
using std::endl;

constexpr int factoral(int n) {//阶乘
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
	static_assert(factoral(3) == 6, "factorial(3) should be 6");//c++11起引入
	assert(y == 6);//断言
	//cout << "3!=" << y << endl;  
	static_assert(factoral(4) == 24, "factorial(4) should be 24");
	std::array<int, factoral(4)> a;
	cout << a.size();

	return 0;
}
