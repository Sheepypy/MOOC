//����1������A / B / C�����࣬B�̳�A��C�̳�B��ABC����tostring����
//����2������print����������A���͵Ĳ���������A�����tostring()
//����3������print����������B/C���Ͳ���������tostring()
//����4��������A��toString������Ϊ�麯��
//����5����print����������Ϊ����ָ�����ͣ�main()�е���print()��ʵ��Ϊָ�����Ļ���ָ��
//����6�����һ��print�����������ǻ����������ͣ���main()�е���print()������Ϊ����Ļ�������

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class A {
public:
  virtual std::string toString() { return "A"; }//virtual���麯�������������Ժ�������ͬ�������Զ�����麯��
  //virtual std::string toString() = 0; // =0�����󣨴��飩������A��Ϊ�����಻��ʵ������B,C����ʵ�ֳ������ſ�ʵ������

};

class B : public A {
public:
  std::string toString() override { return "B"; }
  //override ����ʡ�ԣ���ʾ��д��Ҫ������������ֵ��������ȫһ�����������;
  //final ��ʾ��ֹ����������������д��
};

class C : public B {
public:
  std::string toString() override { return "C"; }
};

//void print(A a) {
//  cout << a.toString() << endl;//�������أ����ܴ������Ĳ�����ABC���࣬������A::toString()
//}
/*����B,C*/
//void print(B a) {
//  cout << a.toString() << endl;
//}
//void print(C a) {
//  cout << a.toString() << endl;
//}
void print(A* o) {
  cout << o->toString() << endl;
}

void print(A& o) {
  cout << o.toString() << endl;
}

int main() {
  A a; B b; C c;
  A* p1 = &a;
  A* p2 = &b;
  A* p3 = &c;
  //���� print(A* o)
  print(p1); // A
  print(p2); // A
  print(p3); // A
  cout << endl;
  cout << p2->toString() << endl;//B
  //���� print(A& o)
  print(a);
  print(b);
  print(c);

  return 0;
}
