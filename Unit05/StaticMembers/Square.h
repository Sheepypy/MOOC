#pragma once
class Square
{
public:
	Square();
	~Square();
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	double getArea() {
		return (side * side);
	}
	double getSide() {
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

Square::Square():Square(1.0)
{
}

Square::~Square()
{
	numberOfObjects--;
}

//int Square::numberOfObjects{ 0 };
//const���͵ľ�̬��Ա����ԭ�س�ʼ������const��Ҫ�����ʼ����Ϊ��ֹ����һ�㶼����