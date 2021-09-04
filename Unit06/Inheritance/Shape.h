#pragma once
#include <iostream>
#include <string>
#include <array>	

using std::string;
using namespace std::string_literals;
enum class Color {
	white, black, red, green, blue, yellow,
};

class Shape
{
public:
	Shape();
	~Shape();
	Shape(Color color_, bool filled_);
	Color getColor();
	void setColor(Color color_);
	bool isFilled();
	void setFilled(bool filled_);
	string toString();

private:
	Color color{ Color::black };//就地初始化
	bool filled{ false };
};

