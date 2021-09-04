//任务1．创建A / B / C三个类，B继承A，C继承B，ABC均有tostring函数
//任务2．创建print函数，接受A类型的参数，调用A对象的tostring()
//任务3．重载print函数，接受B/C类型参数，调用tostring()
//任务4．将基类A的toString函数改为虚函数
//任务5．将print函数参数改为基类指针类型，main()中调用print()，实参为指向对象的基类指针
//任务6．添加一个print函数，参数是基类引用类型，在main()中调用print()，参数为对象的基类引用

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class A {
public:
  virtual std::string toString() { return "A"; }//virtual：虚函数，祖先声明以后派生类同名函数自动变成虚函数
  //virtual std::string toString() = 0; // =0：抽象（纯虚）函数，A成为抽象类不可实例化，B,C必须实现抽象函数才可实例化；

};

class B : public A {
public:
  std::string toString() override { return "B"; }
  //override （可省略）表示覆写，要求函数名，返回值，参数完全一样，避免出错;
  //final 表示禁止本类的派生类继续覆写；
};

class C : public B {
public:
  std::string toString() override { return "C"; }
};

//void print(A a) {
//  cout << a.toString() << endl;//若不重载，不管传进来的参数是ABC哪类，都调用A::toString()
//}
/*重载B,C*/
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
  //调用 print(A* o)
  print(p1); // A
  print(p2); // A
  print(p3); // A
  cout << endl;
  cout << p2->toString() << endl;//B
  //调用 print(A& o)
  print(a);
  print(b);
  print(c);

  return 0;
}
