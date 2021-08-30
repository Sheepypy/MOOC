#pragma once
#include <vector>
#include <iostream>
#include <string>

/**
 * @def PRINT(x)
 *
 * @brief       A macro that defines print
 *
 * @param       x       A variable to print.
 */

#define PRINT(x) std::cout<< #x << ":" << x << std::endl;//#x会创建一个字符串："x"

//默认的cout<< x是不允许的，因此用下面的函数重载<<操作符用于输出x
 /**
	* @fn  template<typename T> std::ostream& operator<<(std::ostream& s , const std::vector<T>& v);
	*
	* @brief       Output the elements in a vector object.
	*              Copy from https://en.cppreference.com/w/cpp/container/vector/vector
	*
	* @param [in,out]      s       A std::ostream to output to.
	* @param               v       A std::vector&lt;T&gt; to process.
	*
	* @returns     The std::ostream object reference.
	*/
template<typename T> //模板
std::ostream& operator<<(std::ostream& s, const std::vector<T>& v) {//T可以是任何类型
	s.put('[');//往缓冲区中插入一个字符'['
	char comma[3] = { '\0', ' ', '\0' };
	for (const auto& e : v) {//e依次取v中的每一个数据
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']'<<std::endl;
	//cout<< '[\0 \0' << v[0] << ', \0' << v[1]<< ', \0' << v[2] << ... << ']'
}