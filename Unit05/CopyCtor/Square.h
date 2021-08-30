#pragma once
#include <iostream>

class Square
{
public:
	Square();
	~Square();
	Square(double side) {//�в�ctor
		this->side = side;
		numberOfObjects++;
	}

	Square(const Square& s) {//const���ڱ�֤s�ں������ڲ����޸�
		this->side = s.side;
		numberOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	}

	double getArea() {//��Ա��������ȡ���
		return (side * side);
	}
	double getSide() {//��Ա��������ȡ�߳�
		return side;
	}
	static int getNumberOfObjects() {//��̬��Ա������ֻ�ܴ���̬��Ա
		//side++;//���󣬲��ܴ���Ǿ�̬��Ա
		return numberOfObjects;
	}
	int getNumberOfObjects_nonstatic() {//�Ǿ�̬��Ա������ֻ��ͨ���������
		return numberOfObjects;
	}
private:
	double side = 1.0;
	static int numberOfObjects;
};

Square::Square() :Square(1.0)
{
}

Square::~Square()
{
	numberOfObjects--;
}

//int Square::numberOfObjects{ 0 };
//const���͵ľ�̬��Ա����ԭ�س�ʼ������const��Ҫ�����ʼ����Ϊ��ֹ����һ�㶼����