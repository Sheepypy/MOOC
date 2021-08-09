#include <iostream>
#include "Circle3.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
  Circle c1{ 1.0 };
  //cout << c1.setRadius(2.0).getArea() << endl;
  cout << c1.setRadius(2.0).setRadius(3.0).getArea() << endl;
  //c1.setRadius(2.0)是一个匿名对象，半径2.0存到了c1的radius中，半径3.0存到了匿名对象的radius中
  return 0;
}
