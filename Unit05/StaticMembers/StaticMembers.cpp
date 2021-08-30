#include <iostream>
#include "Square.h"

using std::cout;
using std::cin;
using std::endl;

int Square::numberOfObjects{ 10 };//����ʼ���Ļ��������Զ���ֵ0
int main() {
	Square s1;
	Square* p1 = &s1;
	Square& r1 = s1;
	//��̬��Ա���������ķ��ʷ�ʽ�����֣�
	cout << s1.getNumberOfObjects() << endl;//<ʵ��������>.<��Ա��>
	cout << Square::getNumberOfObjects() << endl;//<����> ::<��Ա��>
	cout << p1->getNumberOfObjects() << endl;//<����ָ����> -> <��Ա��>
	cout << r1.getNumberOfObjects() << endl;//<����������>.<��Ա��>
	cout << endl;
	Square s2{ 2 };
	cout << Square::getNumberOfObjects() << endl;
	cout << s2.getNumberOfObjects_nonstatic() << endl;
	//cout << Square::getNumberOfObjects_nonstatic() << endl;//error���Ǿ�̬��Ա�����������ض��������Ӧ������ͨ����������
	//cout << Square::numberOfObjects << endl;//error��˽�����Ա����ֱ�ӷ���
	return 0;
}

