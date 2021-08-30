#include "Employee.h"

void Employee::setName(std::string name) { this->name = name; }

void Employee::setGender(Gender gender) { this->gender = gender; }

void Employee::setBirthday(Date birthday) { *(this->birthday) = birthday; }
//注意！！！此处不能用this->birthday = &birthday： 
//指针指向位置从堆区变成栈区，析构函数delete执行不了，会导致内存释放失败

std::string Employee::getName() { return name; }

Gender Employee::getGender() { return gender; }

Date Employee::getBirthday() { return *birthday; }//函数返回值是对象

std::string Employee::toString() {
	return (name + "：" + (gender == Gender::male 
												 ? std::string("male") 
												 : std::string("female "))
											+ birthday->toString());
}

Employee::Employee(std::string name, Gender gender, Date birthday) :
	name{ name }, gender{ gender }{
	numberOfObjects++;
	this->birthday = new Date{ birthday };//调用了Date类隐式声明的拷贝构造函数，在堆上创建了一个和birthday的值相同的对象  
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;
}

Employee::Employee() 
	:Employee("Sheeypypy", Gender::female, Date(1900, 1, 1))//委托构造函数，Date(1900, 1, 1)为匿名对象
{
}

Employee::Employee(const Employee& e) {
	this->birthday = new Date{ *(e.birthday) };//在堆区新建成员
	this->name = e.name;
	this->gender = e.gender;
	numberOfObjects++;
}

Employee::~Employee()
{
	numberOfObjects--;
	delete birthday;//调用birthday的析构函数~Date()，但此时birthday仍指向原地址，只是（*birthday）内存释放
	birthday = nullptr;//清除birthday内容
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;


}
