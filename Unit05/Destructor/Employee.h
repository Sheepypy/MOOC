#pragma once
//相较于<02ImmutableObject>的改动：
//1：增加静态成员， 计算Employee对象的数量；
//2：将Employee类的生日数据成员由Date类型改为Date*类型；
//3：修改构造函数和析构函数

#include <iostream>
#include <string>
#include "Date.h"

enum class Gender//带有范围限制
{
	male,
	female,
};//枚举数据类型无法直接转换为字符串

class Employee
{
public:
	Employee();
	~Employee();
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }
	//注意！！！此处不能用this->birthday = &birthday： 指针指向位置从堆区变成栈区，析构函数delete执行不了，会导致内存释放失败
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	//Date* getBirthday() { return birthday; }//函数返回值是对象指针
	Date getBirthday() { return *birthday; }//函数返回值是对象
	std::string toString() {
		return (name + "：" + (gender == Gender::male ? std::string("male") : std::string("female")) + " " + birthday->toString());
	}
	Employee(std::string name, Gender gender, Date birthday) :
		name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday = new Date{ birthday };//调用了Date类隐式声明的拷贝构造函数，在堆上创建了一个和birthday的值相同的对象  
		std::cout << "now there are " << numberOfObjects << " employees." << std::endl;
	}

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
};

Employee::Employee() :Employee("Sheeypypy", Gender::female, Date(1900, 1, 1))//委托构造函数，Date(1900, 1, 1)为匿名对象
{
}

Employee::~Employee()
{
	numberOfObjects--;  
	delete birthday;//调用birthday的析构函数~Date()，但此时birthday仍指向原地址，只是（*birthday）内存释放
	birthday = nullptr;//清除birthday内容
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;


}

