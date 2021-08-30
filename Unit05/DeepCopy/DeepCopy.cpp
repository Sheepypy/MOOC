#include "Employee.h"
#include "Date.h"
#include <iostream>

//任务1 : 构造Employee对象e1，拷贝构造e2
//任务2 : 调试模式观察e1和e2的birthday成员
//任务3 : 添加拷贝构造函数实现深拷贝
//任务4 : 调试模式观察e1和e2的birthday成员


using std::cout;
using std::cin;
using std::endl;

int Employee::numberOfObjects = 0;
int main() {
  Employee e1{ "sheepypy",Gender::female,{2000,1,1} };
  Employee e2{ e1 };//如果是编译器隐式生成的ctor，无法debug进入
  Date d1{ e1.getBirthday() };
  cout << d1.toString() << endl;
  cout << e1.toString() << endl;
  cout << e2.toString() << endl;
  return 0;
}
