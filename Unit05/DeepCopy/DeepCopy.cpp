#include "Employee.h"
#include "Date.h"
#include <iostream>

//����1 : ����Employee����e1����������e2
//����2 : ����ģʽ�۲�e1��e2��birthday��Ա
//����3 : ��ӿ������캯��ʵ�����
//����4 : ����ģʽ�۲�e1��e2��birthday��Ա


using std::cout;
using std::cin;
using std::endl;

int Employee::numberOfObjects = 0;
int main() {
  Employee e1{ "sheepypy",Gender::female,{2000,1,1} };
  Employee e2{ e1 };//����Ǳ�������ʽ���ɵ�ctor���޷�debug����
  Date d1{ e1.getBirthday() };
  cout << d1.toString() << endl;
  cout << e1.toString() << endl;
  cout << e2.toString() << endl;
  return 0;
}
