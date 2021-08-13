#include <iostream>

class X {
	int a = 1;//拷贝初始化
	int b = { 2 };//拷贝列表初始化
	int c{ 3 };//列表初始化
	std::string s{ 'b', 'y', 'e' };
	std::string s2{ "Hello" };
	std::string s3 = "YYY";
	int arr1[3] = { 1,2,3 };
	int arr2[4]{ 1 };
	int arr3[3]{ 3,2,1 };
};
using std::cout;
using std::cin;
using std::endl;

int main() {

	return 0;
}
