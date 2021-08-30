#pragma once
#include <iostream>
#include <string>
#include "Date.h"

enum class Gender//���з�Χ����
{
	male,
	female,
};//ö�����������޷�ֱ��ת��Ϊ�ַ���

class Employee
{
public:
	Employee();
	~Employee();
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { this->birthday = birthday; }
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date* getBirthday() { return &birthday; }//��������ֵ��ָ�룬return���ǵ�ַ��
	std::string toString() {
		return (name + "��" + (gender == Gender::male ? std::string("male") : std::string("female")) + " " + birthday.toString());
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }, birthday{ birthday }{}

private:
	std::string name;
	Gender gender;
	Date birthday;
};

Employee::Employee():Employee("Sheeypypy", Gender::female ,Date(2021,8,20))//ί�й��캯��
{
}

Employee::~Employee()
{
}

