#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Circle
{
public:
	Circle();//���캯������
	~Circle();//������������
	double radius;//��������
	Circle(double r) {//�������Ĺ��캯��
		radius = r;			
	}
	double getArea() {//���Ա����������ֱ��ʵ���Զ���Ϊ��������
		return radius * radius *3.1415926535;
	}
private:

};

Circle::Circle()//���캯��ʵ�֣����캯�������������޷���ֵ���ɲ��������������أ�����ͬ��
{
		radius = 1.0;
}

Circle::~Circle()//��������ʵ��
{
}

int main() {
	Circle c1;
	Circle c2(2.0);
	Circle c3{ 2.0 };
	Circle c4 = { 2.0 };
	//Circle c4 = ( 2.0 );// ���У����淶
	auto c5 = Circle{ 2. };//����������ֵ
	//auto c5 = Circle(2.0);
	decltype (c5) c6;
	//decltype (c5) c6{ 2.0 };
	//decltype (c5) c6(2.0);
	//decltype (c5) c6 = { 2.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	cout << c3.getArea() << endl;
	cout << c4.getArea() << endl;
	cout << c5.getArea() << endl;
	cout << c6.getArea() << endl;
	return 0;
}
