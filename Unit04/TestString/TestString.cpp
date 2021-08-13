#include <iostream>
#include <string>//std::stoi��һϵ��ת������
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	//�����ַ���
	string s1{ "Hello" };

	//clear
	s1.clear();

	//������Ϊ�ַ�����ֵ
	char arr[]{ 'W','o','r','l','d','\0' };
	s1 += arr;//+=:��һ���ַ���׷�ӵ���һ���ַ���ĩβ
	//asign()
	s1.assign("Hello,World!");
	cout << s1 << endl;

	//append ׷���ַ���
	s1.append("    ");
	s1.append(5, '\t');
	s1.append("$");
	cout << s1 << endl;

	//insert �հ�
	s1.insert(0, "   ");
	cout << s1 << endl;

	//�Ƴ��ַ���֮ǰ�Ŀհ�,Java��trim
	s1.erase(0, s1.find_first_not_of(" \t\n\r"));//erase(start,end)����startһֱɾ��end
	cout << s1 << endl;

	//�Ƴ��ַ���֮��Ŀհ�
	s1.erase(s1.end() - 1);//ȥ����β��'$'
	cout << s1 << endl;
	s1.erase(s1.find_last_not_of(" \t\n\r") + 1);//erase(index)����indexһֱɾ����β
	s1 += '$';
	cout << s1 << endl;

	//���ַ���ת���������򸡵���
	s1.assign("1024");
	int x = std::stoi(s1);//�ú���ʹ��strtol����wcstol����ִ��ת��

	cout << s1 << endl;
	cout << "x=" << x << endl;
	string s2 = std::to_string(x);
	cout << "s2:" << s2 << endl;
	return 0;
}
