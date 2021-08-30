#include <iostream>
#include <array>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::array;

void print(array<int, 3>& a) {

	for (auto i : a) {
		cout << i << " ";
	}
	cout << endl;
}

int seach(array<int, 3>& a, int token) {
	bool exist{ false };
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == token) {
			exist = true;
			return i;
		}
	}
	//cout << token << " not exist!" << endl;
	return (-1);
}
int main() {
	//��������
	array a1{ 1,2,3 };//c++17֮ǰҪ��array <int,3> a1{ 1,2,3 }��
	print(a1);
	cout << "-------------------------------" << endl;

	//Ϊ���鸳ֵ
	a1 = { 7,8,9 };
	print(a1);
	cout << "-------------------------------" << endl;

	//��������
	array b1{ 200,100,300 };
	cout << "before swap:" << endl;
	cout << "a1:" << endl;
	print(a1);
	cout << "b1:" << endl;
	print(b1);
	a1.swap(b1);
	cout << "after swap:" << endl;
	cout << "a1:" << endl;
	print(a1);
	cout << "b1:" << endl;
	print(b1);
	cout << "-------------------------------" << endl;

	//�������С
	cout << a1.size() << endl;//Ԫ����Ŀ
	cout << a1.max_size() << endl;//�ܴ��������Ԫ����Ŀ
	cout << "-------------------------------" << endl;

	//��дsearch�����������в���һ��ֵ
	cout << "serch 300: " << seach(a1, 300) << endl;
	cout << "serch 400: " << seach(a1, 400) << endl;

	//sort����
	cout << "before sort:" << endl;
	print(a1);
	std::sort(a1.begin(), a1.end());//��Ҫ<algorithm>��ǰ��������Ϊ������ָ�룬�ֱ�ָ����������β������������Ϊ�ȽϷ�������дĬ��Ϊ����
	//std::sort(a1.rbegin(), a1.rend());//����������� ��������
	cout << "after sort:" << endl;
	print(a1);
	cout << "-------------------------------" << endl;

	//��ά����
	array<array<int, 3>, 4> arr{ 0 };//4*3����
	for (auto x : arr) {
		for (auto i : x)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}
