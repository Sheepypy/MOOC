#include <iostream>
// 任务1：继承构造函数
//   创建基类B及构造函数B(int)，B(char)和派生类D；D中不继承/继承B的ctor时的效果

// 任务2：派生类中调用基类构造函数
//   D中增加成员double x；及D(double)，在D(double)初始化列表调用B(i)并初始化 x

// 任务3：派生类先调基类ctor，再构造内嵌对象
//   增加类E及E(int)，并再D中加入E的两个对象;创建D对象观察E ctor和B ctor次序

using std::cout;
using std::cin;
using std::endl;

//定义父类
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

//定义子类，继承B
class D : public B {
public:
  using B::B;//继承B所有Ctor
  //上一行会让编译器生成下列三个cotr：
  //D():B() {}
  //D(int i):B(i) {}
  //D(char c):B(c) {}
  D() { cout << "D()" << endl;  Dcout++; };
  //如果定义了D(){//do sth.},先调用父类cotr:B(),再执行do sth.
  //如果定义了内嵌对象，则先构造内嵌对象，再执行do sth.
  D(double x) : e1{}, e2{}, B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }
  ~D() { cout << "~D()" << endl; Dcout--; }
private:
  E e1, e2;//内嵌对象
  static int Dcout;

};

int B::Bcout = 0;
int D::Dcout = 0;
int E::Ecout = 0;

int main() {
  B b;//输出B() 
  cout << endl;
  D d;//输出B(), E(), E(), D() 
  cout << endl;
  D d1{ 3 };//输出B(3), E(), E()
  cout << endl;
  D d2{ 3.03 };//输出B(3.03), E(), E()，D(3.03)
	return 0;
}
