#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Date {
private:
  int year{ 2019 }, month{ 1 }, day{ 1 };
public:
  friend class Kid;
  friend void print(const Date& d);
};

//类外定义：不需要 Date::，因为友元不属于Date类
class Kid {
private:
  Date birthday;
public:
  Kid() {
    cout << "I was born in " << birthday.year << endl;
  }
};

void print(const Date& d) {
  cout << d.year << "/" << d.month << "/" << d.day << endl;
}

int main() {
  print(Date());
  Kid k;
  return 0;
}
