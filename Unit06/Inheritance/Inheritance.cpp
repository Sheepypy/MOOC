#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

//�����������û��ຯ��tostring()
using std::cout;
using std::cin;
using std::endl;

int main() {
  Shape s1{ Color::white,false };
  Circle c1(1.0, Color::yellow, true);
  Rectangle r1{ 1.0,2.0,Color::blue, false };
  cout << s1.toString() << endl;
  cout << c1.toString() << endl;
  cout << r1.toString() << endl;
  return 0;
}
