#include <iostream>
#include <string>//std::stoi等一系列转化函数
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	//创建字符串
	string s1{ "Hello" };

	//clear
	s1.clear();

	//用数组为字符串赋值
	char arr[]{ 'W','o','r','l','d','\0' };
	s1 += arr;//+=:将一个字符串追加到另一个字符串末尾
	//asign()
	s1.assign("Hello,World!");
	cout << s1 << endl;

	//append 追加字符串
	s1.append("    ");
	s1.append(5, '\t');
	s1.append("$");
	cout << s1 << endl;

	//insert 空白
	s1.insert(0, "   ");
	cout << s1 << endl;

	//移除字符串之前的空白,Java用trim
	s1.erase(0, s1.find_first_not_of(" \t\n\r"));//erase(start,end)：从start一直删到end
	cout << s1 << endl;

	//移除字符串之后的空白
	s1.erase(s1.end() - 1);//去除结尾的'$'
	cout << s1 << endl;
	s1.erase(s1.find_last_not_of(" \t\n\r") + 1);//erase(index)：从index一直删到结尾
	s1 += '$';
	cout << s1 << endl;

	//把字符串转化成整数或浮点数
	s1.assign("1024");
	int x = std::stoi(s1);//该函数使用strtol（或wcstol）来执行转换

	cout << s1 << endl;
	cout << "x=" << x << endl;
	string s2 = std::to_string(x);
	cout << "s2:" << s2 << endl;
	return 0;
}
