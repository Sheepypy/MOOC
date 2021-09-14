#include <iostream>
#include <string>
using namespace std::string_literals;

using std::cout;
using std::endl;

template<typename T>//模板前缀
void f(T s) {//模板函数
    std::cout << s << '\n';
}

template <class T, typename Q>
auto add(T x, Q y) {
    return (x + y);
}
//显式实例化（explicit instantiation）的几种方式：
template void f<double>(double);
template void f<>(char);
template void f(int);

// fmax函数模板定义
template <typename T>
T fmax(T x, T y) {
    return (x > y ? x : y);
}
// fmax显式实例化：整数
template <int> int fmax(int, int);


int main() {
    f<double>(1); // 实例化并调用 f<double>(double)
    f<>('a'); // 实例化并调用 f<char>(char)
    f(7); // 实例化并调用 f<int>(int)
    void (*ptr)(std::string) = f; // 实例化 f<string>(string)
    //f<char>(656);
    cout << std::endl;

    std::cout << "add(3,2.3):" << add(3, 2.3) << std::endl; // add(double x, int y);
    cout << std::endl;

    // 调用显式实例化的函数
    std::cout << "fmax(1, 2) : " << fmax(1, 2) << std::endl;
    // 浮点数实例化
    std::cout << "fmax(2.9, 1.0) : " << fmax(2.9, 1.0) << std::endl;

    // 字符实例化
    std::cout << "fmax('A', 'D') : " << fmax('A', 'D') << std::endl;

    // 字符串字面量实例化
    std::cout << R"(fmax("ABC", "ABD") : )" << fmax("ABC", "ABD") << std::endl;//实际比较的是char*指针指向的地址，永远返回第一个参数
    std::cout << R"(fmax("123", "124") : )" << fmax("123", "124") << std::endl;

    // std::string类型实例化
    std::cout << R"(fmax("ABC"s, "ABD"s))" << fmax("ABC"s, "ABD"s) << std::endl;//实际比较的是字符串的ASC码
    std::cout << R"(fmax("ABD"s, "ABC"s))" << fmax("ABD"s, "ABC"s) << std::endl;

}