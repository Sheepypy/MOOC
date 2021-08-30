#include "Employee.h"

void Employee::setName(std::string name) { this->name = name; }

void Employee::setGender(Gender gender) { this->gender = gender; }

void Employee::setBirthday(Date birthday) { *(this->birthday) = birthday; }
//ע�⣡�����˴�������this->birthday = &birthday�� 
//ָ��ָ��λ�ôӶ������ջ������������deleteִ�в��ˣ��ᵼ���ڴ��ͷ�ʧ��

std::string Employee::getName() { return name; }

Gender Employee::getGender() { return gender; }

Date Employee::getBirthday() { return *birthday; }//��������ֵ�Ƕ���

std::string Employee::toString() {
	return (name + "��" + (gender == Gender::male 
												 ? std::string("male") 
												 : std::string("female "))
											+ birthday->toString());
}

Employee::Employee(std::string name, Gender gender, Date birthday) :
	name{ name }, gender{ gender }{
	numberOfObjects++;
	this->birthday = new Date{ birthday };//������Date����ʽ�����Ŀ������캯�����ڶ��ϴ�����һ����birthday��ֵ��ͬ�Ķ���  
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;
}

Employee::Employee() 
	:Employee("Sheeypypy", Gender::female, Date(1900, 1, 1))//ί�й��캯����Date(1900, 1, 1)Ϊ��������
{
}

Employee::Employee(const Employee& e) {
	this->birthday = new Date{ *(e.birthday) };//�ڶ����½���Ա
	this->name = e.name;
	this->gender = e.gender;
	numberOfObjects++;
}

Employee::~Employee()
{
	numberOfObjects--;
	delete birthday;//����birthday����������~Date()������ʱbirthday��ָ��ԭ��ַ��ֻ�ǣ�*birthday���ڴ��ͷ�
	birthday = nullptr;//���birthday����
	std::cout << "now there are " << numberOfObjects << " employees." << std::endl;


}
