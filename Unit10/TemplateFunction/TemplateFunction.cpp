#include <iostream>
#include <string>
using namespace std::string_literals;

using std::cout;
using std::endl;

template<typename T>//ģ��ǰ׺
void f(T s) {//ģ�庯��
    std::cout << s << '\n';
}

template <class T, typename Q>
auto add(T x, Q y) {
    return (x + y);
}
//��ʽʵ������explicit instantiation���ļ��ַ�ʽ��
template void f<double>(double);
template void f<>(char);
template void f(int);

// fmax����ģ�嶨��
template <typename T>
T fmax(T x, T y) {
    return (x > y ? x : y);
}
// fmax��ʽʵ����������
template <int> int fmax(int, int);


int main() {
    f<double>(1); // ʵ���������� f<double>(double)
    f<>('a'); // ʵ���������� f<char>(char)
    f(7); // ʵ���������� f<int>(int)
    void (*ptr)(std::string) = f; // ʵ���� f<string>(string)
    //f<char>(656);
    cout << std::endl;

    std::cout << "add(3,2.3):" << add(3, 2.3) << std::endl; // add(double x, int y);
    cout << std::endl;

    // ������ʽʵ�����ĺ���
    std::cout << "fmax(1, 2) : " << fmax(1, 2) << std::endl;
    // ������ʵ����
    std::cout << "fmax(2.9, 1.0) : " << fmax(2.9, 1.0) << std::endl;

    // �ַ�ʵ����
    std::cout << "fmax('A', 'D') : " << fmax('A', 'D') << std::endl;

    // �ַ���������ʵ����
    std::cout << R"(fmax("ABC", "ABD") : )" << fmax("ABC", "ABD") << std::endl;//ʵ�ʱȽϵ���char*ָ��ָ��ĵ�ַ����Զ���ص�һ������
    std::cout << R"(fmax("123", "124") : )" << fmax("123", "124") << std::endl;

    // std::string����ʵ����
    std::cout << R"(fmax("ABC"s, "ABD"s))" << fmax("ABC"s, "ABD"s) << std::endl;//ʵ�ʱȽϵ����ַ�����ASC��
    std::cout << R"(fmax("ABD"s, "ABC"s))" << fmax("ABD"s, "ABC"s) << std::endl;

}