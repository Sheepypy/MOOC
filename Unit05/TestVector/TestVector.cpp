#include <vector>
#include <string>
#include <iostream>
#include "Helper.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

	//��C++11���б��ʼ������vector����words1
	//c++17��׼���Զ�ģ�����Զ��Ƶ�������д<std::string>
	std::vector<std::string> words1{ "hello","world!","welcome","to","c++!" };
	PRINT(words1);

	//���Ե�����
	cout << *words1.begin() << endl;
	cout << *--words1.end() << endl;
	cout << *--words1.rend() << endl;
	cout << *words1.rbegin() << endl << endl;

	//ɾ��words1���һ��Ԫ��
	cout << "ɾ��words1���һ��Ԫ��" << endl;
	words1.erase(words1.end() - 1);
	PRINT(words1);

	//��words1β��׷��Ԫ��
	cout << "��words1β��׷��Ԫ��" << endl;
	words1.push_back("Java!");
	PRINT(words1);

	//�õ���������words1�������Դ���words2
	cout << "�õ���������words1�������Դ���words2" << endl;
	std::vector<std::string> words2(words1.begin() + 2, words1.end());
	PRINT(words2);

	//��words2�в���Ԫ��
	cout << "��words2�в���Ԫ��" << endl;
	words2.insert(words2.begin(), "Hello!");//������where��ǰ��
	PRINT(words2);

	//�ÿ������촴��words3
	cout << "�ÿ������촴��words3" << endl;
	std::vector<std::string> words3(words2);
	PRINT(words3);

	//��[]�޸�words3��Ԫ��
	cout << "��[]�޸�words3��Ԫ��" << endl;
	words3[3] = "Python!";
	PRINT(words3);

	//����words4����ʼ��Ϊ�����ͬ���ִ�
	cout << "����words4����ʼ��Ϊ�����ͬ���ִ�" << endl;
	std::vector<std::string> words4(4, "c++");
	PRINT(words4);

	//words3 �� words4����
	cout << "words3 �� words4����" << endl;
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);
	return 0;
}
