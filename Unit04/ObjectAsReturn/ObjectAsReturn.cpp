#include <iostream>
#include "Circle3.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
  Circle c1{ 1.0 };
  //cout << c1.setRadius(2.0).getArea() << endl;
  cout << c1.setRadius(2.0).setRadius(3.0).getArea() << endl;
  //c1.setRadius(2.0)��һ���������󣬰뾶2.0�浽��c1��radius�У��뾶3.0�浽�����������radius��
  return 0;
}
