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
	void depoist(double amount) {//存钱
		balance_ += amount;
	}
	double withdraw(double amount) {//取钱
		auto temp{ 0.0 };
		if (balance_ < amount) //余额不足
		{
			temp = balance_;
			balance_ = 0;//余额归零
			return temp;//取出了余额所有钱
		}
		else
		{
			balance_ -= amount;
			return amount;//取出了想取的钱
		}
	}
private:
	double balance_;//余额，私有类变量命名后面加_
};

Account::Account()
{
	balance_ = 0.0;//一定要初始化
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
