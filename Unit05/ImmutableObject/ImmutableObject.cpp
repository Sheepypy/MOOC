#include <iostream>
#include "Date.h"
#include "Employee.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
  Employee e;
  //1:setter
  e.setBirthday(Date(2019, 9, 5));
  cout << e.toString() << endl;

  //2:getter
  e.getBirthday()->setYear(2026);
  cout << e.toString() << endl;

  return 0;
}
