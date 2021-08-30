#include <iostream>
#include"Square.h"

using std::cout;
using std::cin;
using std::endl;

int Square::numberOfObjects{ 0 };//!!!��û�г�ʼ���ᱨ���޷��������ⲿ����"private: static int Square::numberOfObjects"

int main() {
  Square s1(10.0);//ֱ�ӹ���
  cout << Square::getNumberOfObjects() << endl;
  Square s2{ s1 };//��������
  cout << Square::getNumberOfObjects() << endl;
  Square* ps3 = new Square{ s1 };//���Ϲ���
	cout << Square::getNumberOfObjects() << endl;
  delete ps3;
  ps3 = nullptr;
  cout << Square::getNumberOfObjects() << endl;

  return 0;
}
