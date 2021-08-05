#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Account
{
public:
	Account();
	~Account();
	Account(double balance) {
		balance_ = balance;
	}
	void depoist(double amount) {//��Ǯ
		balance_ += amount;
	}
	double withdraw(double amount) {//ȡǮ
		auto temp{ 0.0 };
		if (balance_ < amount) //����
		{
			temp = balance_;
			balance_ = 0;//������
			return temp;//ȡ�����������Ǯ
		}
		else
		{
			balance_ -= amount;
			return amount;//ȡ������ȡ��Ǯ
		}
	}
private:
	double balance_;//��˽����������������_
};

Account::Account()
{
	balance_ = 0.0;//һ��Ҫ��ʼ��
}

Account::~Account()
{
}
int main() {
	Account a1;
	Account a2 = Account(100.0);
	a1.depoist(9.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(52.0) << endl;
	cout << Account(1000.0).withdraw(10001.0) << endl;

	return 0;
}
