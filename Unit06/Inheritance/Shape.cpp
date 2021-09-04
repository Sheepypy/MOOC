#include "Shape.h"

Shape::Shape()
{
}

Shape::~Shape()
{
}
Shape::Shape(Color color_, bool filled_) :color{ color_ }, filled{ filled_ }{
}
Color Shape::getColor() {
	return color;
}
void Shape::setColor(Color color_) {
	color = color_;
}
bool Shape::isFilled() {
	return filled;
}
void Shape::setFilled(bool filled_) {
	filled = filled_;
}
string Shape::toString() {
	std::array c{ "white"s, "black"s, "red"s, "green"s, "blue"s, "yellow"s, };
	return "Color: " + c[static_cast<int>(color)] + "," + (filled ? "filled"s : "not filled"s);
	//     枚举类型强制转化为整形作为字符串数组的下标
}