#include <iostream>
#include <array>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::array;

void print(array<int, 3>& a) {

	for (auto i : a) {
		cout << i << " ";
	}
	cout << endl;
}

int seach(array<int, 3>& a, int token) {
	bool exist{ false };
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == token) {
			exist = true;
			return i;
		}
	}
	//cout << token << " not exist!" << endl;
	return (-1);
}
int main() {
	//创建数组
	array a1{ 1,2,3 };//c++17之前要用array <int,3> a1{ 1,2,3 }；
	print(a1);
	cout << "-------------------------------" << endl;

	//为数组赋值
	a1 = { 7,8,9 };
	print(a1);
	cout << "-------------------------------" << endl;

	//交换数组
	array b1{ 200,100,300 };
	cout << "before swap:" << endl;
	cout << "a1:" << endl;
	print(a1);
	cout << "b1:" << endl;
	print(b1);
	a1.swap(b1);
	cout << "after swap:" << endl;
	cout << "a1:" << endl;
	print(a1);
	cout << "b1:" << endl;
	print(b1);
	cout << "-------------------------------" << endl;

	//求数组大小
	cout << a1.size() << endl;//元素数目
	cout << a1.max_size() << endl;//能储存的最大的元素数目
	cout << "-------------------------------" << endl;

	//编写search函数在数组中查找一个值
	cout << "serch 300: " << seach(a1, 300) << endl;
	cout << "serch 400: " << seach(a1, 400) << endl;

	//sort排序
	cout << "before sort:" << endl;
	print(a1);
	std::sort(a1.begin(), a1.end());//需要<algorithm>，前两个参数为迭代器指针，分别指向容器的首尾，第三个参数为比较方法（不写默认为升序）
	//std::sort(a1.rbegin(), a1.rend());//用逆向迭代器 降序排序
	cout << "after sort:" << endl;
	print(a1);
	cout << "-------------------------------" << endl;

	//二维数组
	array<array<int, 3>, 4> arr{ 0 };//4*3矩阵
	for (auto x : arr) {
		for (auto i : x)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}
