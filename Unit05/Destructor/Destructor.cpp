#include <iostream>
#include "Date.h"
#include "Employee.h"

using std::cout;
using std::cin;
using std::endl;

int Employee::numberOfObjects = 0;

int main() {
	//e1作用域（生命周期）：{}
	{Employee e1;
	cout << e1.toString() << endl << endl;
	Employee* e2 = new Employee{ "Wang", Gender::male, Date(1997, 8, 5) };//堆上创建（函数作用域）
	cout << e2->toString() << endl << endl;
	//e3作用域（生命周期）：{}
	{

		Employee e3{ "Sean", Gender::male, Date(1991, 10, 05) };//栈上创建（内嵌作用域）
		cout << e3.toString() << endl << endl;
	//e3.setBirthday(Date(2026, 9, 5));
	//cout << e3.toString() << endl << endl;
	}//销毁e3
	}//销毁e1
	return(0);
}
