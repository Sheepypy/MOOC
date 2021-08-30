#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using namespace std::string_literals;
int main() {
	cout << "C++11 Raw String literals:" << endl;
	//����ǰ��ķָ���Ҫһ�£�Ҳ����Ϊ�գ���
	const char* s1 = R"sheep(Hello
World)sheep";

	// s1Ч���������s2��s3��ͬ
	const char* s2 = "Hello\nWorld";
	const char* s3 = R"NoUse(Hello 
World)NoUse";

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;

	cout << endl << "C++14: String Literals:" << endl;

	auto h1 = "Hello!"s;              // hello is of std::string type
	auto h2 = std::string{ "Hello!" };  // equals to the above
	auto h3 = "Hello!";               // hello is of const char* type

	std::string s4 = "abc\0\0def"; //\0��ʾ�ַ�������
	std::string s5 = "abc\0\0def"s;//˫�������Զ����std::string���Ͷ���
	std::cout << "s4: " << s4.size() << " \"" << s4 << "\"\n";
	std::cout << "s5: " << s5.size() << " \"" << s5 << "\"\n";

	return 0;

}
