#include <iostream>
#include "Date.h"
#include "Employee.h"
// ����1������Employee����e1����������e2
// ����2������ģʽ�۲�e1��e2��birthday��Ա
// ����3����ӿ������캯��ʵ�����
// ����4������ģʽ�۲�e1��e2��birthday��Ա
int Employee::numberOfObjects = 0;
int main() {
  Employee e1{ "Alex",Gender::male,{1998, 5,1} };
  Employee e2{ e1 };
  std::cout << e1.toString() << std::endl;
  std::cout << e2.toString() << std::endl;

  Employee e3{};
  std::cout << e3.toString() << std::endl;
  std::cout << (e3 = e1).toString() << std::endl;;

  std::cin.get();
  return (0);
}