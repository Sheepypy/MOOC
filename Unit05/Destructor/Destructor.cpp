#include <iostream>
#include "Date.h"
#include "Employee.h"

using std::cout;
using std::cin;
using std::endl;

int Employee::numberOfObjects = 0;

int main() {
	//e1�������������ڣ���{}
	{Employee e1;
	cout << e1.toString() << endl << endl;
	Employee* e2 = new Employee{ "Wang", Gender::male, Date(1997, 8, 5) };//���ϴ���������������
	cout << e2->toString() << endl << endl;
	//e3�������������ڣ���{}
	{

		Employee e3{ "Sean", Gender::male, Date(1991, 10, 05) };//ջ�ϴ�������Ƕ������
		cout << e3.toString() << endl << endl;
	//e3.setBirthday(Date(2026, 9, 5));
	//cout << e3.toString() << endl << endl;
	}//����e3
	}//����e1
	return(0);
}
