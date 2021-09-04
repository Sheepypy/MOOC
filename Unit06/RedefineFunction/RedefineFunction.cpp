#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;

int main() {
  Shape s1{ Color::blue, false };
  Circle c1{ 3.9, Color::green, true };
  Rectangle r1{ 4.0, 1.0, Color::white, true };

  std::cout << s1.toString() << std::endl;
  std::cout << c1.toString() << std::endl;
  std::cout << r1.toString() << std::endl;

  std::cout << "c1 area: " << c1.getArea() << std::endl;
  std::cout << "r1 area: " << r1.getArea() << std::endl;

  auto& rc = typeid(c1);
  auto& rs = typeid(s1);
  if (typeid(Shape) == rs) {
    cout << "typeid(Shape)=typeid(s1)" << endl;
  }
  cout << "c1.name: " << rc.name() << endl;
  cout << "c1.name: " << rs.name() << endl;
}