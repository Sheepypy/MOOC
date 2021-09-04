#include <iostream>
// ����1���̳й��캯��
//   ��������B�����캯��B(int)��B(char)��������D��D�в��̳�/�̳�B��ctorʱ��Ч��

// ����2���������е��û��๹�캯��
//   D�����ӳ�Աdouble x����D(double)����D(double)��ʼ���б����B(i)����ʼ�� x

// ����3���������ȵ�����ctor���ٹ�����Ƕ����
//   ������E��E(int)������D�м���E����������;����D����۲�E ctor��B ctor����

using std::cout;
using std::cin;
using std::endl;

//���常��
class B {
public:
  B() { cout << "B()" << endl; Bcout++; }
  ~B() { cout << "~B()" << endl; Bcout--; }
  B(int i) { cout << "B(" << i << ")" << endl; }
  B(char c) { cout << "B(" << c << ")" << endl; }
private:
  static int Bcout;
};

class E {
public:
  E() { cout << "E()" << endl; Ecout++; }
  ~E() { cout << "~E()" << endl; Ecout--; }
private:
  static int Ecout;
};

//�������࣬�̳�B
class D : public B {
public:
  using B::B;//�̳�B����Ctor
  //��һ�л��ñ�����������������cotr��
  //D():B() {}
  //D(int i):B(i) {}
  //D(char c):B(c) {}
  D() { cout << "D()" << endl;  Dcout++; };
  //���������D(){//do sth.},�ȵ��ø���cotr:B(),��ִ��do sth.
  //�����������Ƕ�������ȹ�����Ƕ������ִ��do sth.
  D(double x) : e1{}, e2{}, B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }
  ~D() { cout << "~D()" << endl; Dcout--; }
private:
  E e1, e2;//��Ƕ����
  static int Dcout;

};

int B::Bcout = 0;
int D::Dcout = 0;
int E::Ecout = 0;

int main() {
  B b;//���B() 
  cout << endl;
  D d;//���B(), E(), E(), D() 
  cout << endl;
  D d1{ 3 };//���B(3), E(), E()
  cout << endl;
  D d2{ 3.03 };//���B(3.03), E(), E()��D(3.03)
	return 0;
}
