#include <iostream>
#include"Square.h"

using std::cout;
using std::cin;
using std::endl;

int Square::numberOfObjects{ 0 };//!!!若没有初始化会报错：无法解析的外部符号"private: static int Square::numberOfObjects"

int main() {
  Square s1(10.0);//直接构造
  cout << Square::getNumberOfObjects() << endl;
  Square s2{ s1 };//拷贝构造
  cout << Square::getNumberOfObjects() << endl;
  Square* ps3 = new Square{ s1 };//堆上构造
	cout << Square::getNumberOfObjects() << endl;
  delete ps3;
  ps3 = nullptr;
  cout << Square::getNumberOfObjects() << endl;

  return 0;
}
