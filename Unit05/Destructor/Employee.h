#pragma once
//�����<02ImmutableObject>�ĸĶ���
//1�����Ӿ�̬��Ա�� ����Employee�����������
//2����Employee����������ݳ�Ա��Date���͸�ΪDate*���ͣ�
//3���޸Ĺ��캯������������

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
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }
	//ע�⣡�����˴�������this->birthday = &birthday�� ָ��ָ��λ�ôӶ������ջ������������deleteִ�в��ˣ��ᵼ���ڴ��ͷ�ʧ��
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	//Date* getBirthday() { return birthday; }//��������ֵ�Ƕ���ָ��
	Date getBirthday() { return *birthday; }//��������ֵ�Ƕ���
	std::string toString() {
		return (name + "��" + (gender == Gender::male ? std::string("male") : std::string("female")) + " " + birthday->toString());
	}
	Employee(std::string name, Gender gender, Date birthday) :
		name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday = new Date{ birthday };//������Date����ʽ�����Ŀ������캯�����ڶ��ϴ�����һ����birthday��ֵ��ͬ�Ķ���  
		std::cout << "now there are " << numberOfObjects << " employees." << std::endl;
	}

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
};

Employee::Employee() :Employee("Sheeypypy", Gender::female, Date(1900, 1, 1))//ί�й��캯����Date(1900, 1, 1)Ϊ��������
{
}

Employee::~Employee()
{
	numberOfObjects--;  
	delete birthday;//����birthday����������~Date()������ʱbirthday��ָ��ԭ��ַ��ֻ�ǣ�*birthday���ڴ��ͷ�
	birthday = nullptr;//���birthday����
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;


}

