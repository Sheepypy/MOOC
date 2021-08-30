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

#define PRINT(x) std::cout<< #x << ":" << x << std::endl;//#x�ᴴ��һ���ַ�����"x"

//Ĭ�ϵ�cout<< x�ǲ�����ģ����������ĺ�������<<�������������x
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
template<typename T> //ģ��
std::ostream& operator<<(std::ostream& s, const std::vector<T>& v) {//T�������κ�����
	s.put('[');//���������в���һ���ַ�'['
	char comma[3] = { '\0', ' ', '\0' };
	for (const auto& e : v) {//e����ȡv�е�ÿһ������
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']'<<std::endl;
	//cout<< '[\0 \0' << v[0] << ', \0' << v[1]<< ', \0' << v[2] << ... << ']'
}