#include <vector>
#include <string>
#include <iostream>
#include "Helper.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

	//用C++11的列表初始化创建vector对象words1
	//c++17标准可以对模板类自动推导，不用写<std::string>
	std::vector<std::string> words1{ "hello","world!","welcome","to","c++!" };
	PRINT(words1);

	//测试迭代器
	cout << *words1.begin() << endl;
	cout << *--words1.end() << endl;
	cout << *--words1.rend() << endl;
	cout << *words1.rbegin() << endl << endl;

	//删除words1最后一个元素
	cout << "删除words1最后一个元素" << endl;
	words1.erase(words1.end() - 1);
	PRINT(words1);

	//在words1尾部追加元素
	cout << "在words1尾部追加元素" << endl;
	words1.push_back("Java!");
	PRINT(words1);

	//用迭代器拷贝words1的内容以创建words2
	cout << "用迭代器拷贝words1的内容以创建words2" << endl;
	std::vector<std::string> words2(words1.begin() + 2, words1.end());
	PRINT(words2);

	//在words2中插入元素
	cout << "在words2中插入元素" << endl;
	words2.insert(words2.begin(), "Hello!");//插入在where的前面
	PRINT(words2);

	//用拷贝构造创建words3
	cout << "用拷贝构造创建words3" << endl;
	std::vector<std::string> words3(words2);
	PRINT(words3);

	//用[]修改words3的元素
	cout << "用[]修改words3的元素" << endl;
	words3[3] = "Python!";
	PRINT(words3);

	//创建words4，初始化为多个相同的字串
	cout << "创建words4，初始化为多个相同的字串" << endl;
	std::vector<std::string> words4(4, "c++");
	PRINT(words4);

	//words3 与 words4交换
	cout << "words3 与 words4交换" << endl;
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);
	return 0;
}
