#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Square
{
public:
	Square();
	~Square();
	Square(double side) {
		this->side = side;
	}
	double getArea() {
		return (side*side);
	}
private:
	double side = 1.0;
};

Square::Square()
{
}

Square::~Square()
{
}
int main() {
	Square s1, s2{ 4.0 };
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;
	s1 = s2;
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	return 0;
}
