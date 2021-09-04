//任务1 : 创建类A，包含公有 / 保护 / 私有成员ijk
//任务2 : 创建类Pub公有继承A，类Pro保护继承A，类Pri私有继承A，
//        观察三个类中的函数foo()对基类成员的访问
//任务3 : 观察main()中三个类对象对基类成员的访问
#include <iostream>
using std::cout;
using std::endl;

class A {
public:
  int i{ 0 };
protected:
  int j{ 0 };
private:
  int k{ 0 };
};

class Pub :public A {
public:
  void foo() { i++; j++; }
};

class Pro :protected A {
public:
  void foo() { i++; j++; }
};

class Pri :private A {
public:
  void foo() { i++; j++; }
};


int main() {
  Pub pub;
  Pro pro;
  Pri pri;
  //pub.i++; pub.j++; pub.k++;//只有pub继承的i是公有属性，可以类外访问；
  //pro.i++; pro.j++; pro.k++;
  //pri.i++; pri.j++; pri.k++;
  return 0;
}