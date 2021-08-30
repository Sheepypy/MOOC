#include <iostream>
#include <array>	

using std::cout;
using std::cin;
using std::endl;

template<typename T1, typename T2, typename T3>

void PRINT(T1 a, T2 b, T3 c) {
	std::cout << a << " " << b << " " << c << endl;
}
void printArray(int* a) {
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
}

class C
{
public:
	C() {};
	~C() {};
	int i{ 0 };
	char ca[4]{ 'o','k','!','\0' };
	std::string s{ "hello" };
};

struct S {
	int i{ 0 };
	char ca[4]{ 'o','k','!','\0' };
	std::string s{ "hello" };
};

int main() {
	//用于原生数组的结构化绑定
	int a[]{ 1,2,3 };
	auto [e1, e2, e3] = a;//拷贝  int
	const auto [f1, f2, f3] {a};//f1,f2,f3不可修改；const int
	auto& [g1, g2, g3](a);//引用 int
	PRINT(e1, e2, e3);
	PRINT(f1, f2, f3);
	PRINT(g1, g2, g3);
	g1 = 2;
	PRINT(g1, g2, g3);
	printArray(a);
	cout << endl;

	//用于std::array的结构化绑定
	std::array b{ 1,2,3 };
	auto [h1, h2, h3] = b;//int&&
	const auto [j1, j2, j3] {b};//const int &&
	auto& [n1, n2, n3](b);//int&
	PRINT(h1, h2, h3);
	PRINT(j1, j2, j3);
	PRINT(n1, n2, n3);
	n1 = 2;
	PRINT(n1, n2, n3);
	PRINT(b[0], b[1], b[2]);

	//用于对象数据成员的结构化绑定
	C c;
	auto [c1, c2, c3] {c};//c1:int ,c2:char[], c3:std::string; 绑定的数据成员必须是公有的  
	PRINT(c1, c2, c3);
	auto& [d1, d2, d3] {c};
	PRINT(d1, d2, d3);
	d1 = 1;
	PRINT(d1, d2, d3);

	//用于结构体成员的结构化绑定
	S s;
	auto [s1, s2, s3] {s};//s1:int ,s2:shar[], s3:std::string; 绑定的数据成员必须是公有的  
	PRINT(s1, s2, s3);
	auto& [p1, p2, p3] {s};
	PRINT(p1, p2, p3);
	p1 = 1;
	PRINT(p1, p2, p3);
	return 0;
}
