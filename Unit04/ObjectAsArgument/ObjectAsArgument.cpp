#include <iostream>
#include "Circle2.h"

using std::cout;
using std::cin;
using std::endl;

//void print(Circle c) {
//  cout << c.getArea() << endl;
//}

void print(Circle& c) {
  cout << c.getArea() << endl;
}

void print(Circle* p) {
  cout << p->getArea() << endl;
}
int main() {
  Circle ca[]{ 1.0 ,2.0, 3.0 };
  print(ca[0]);
  print(ca[1]);
  print(ca + 2);
  return 0;
}
