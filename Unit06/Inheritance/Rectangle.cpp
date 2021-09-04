#include "Rectangle.h"
//创建Rectangle类，从Shape类继承
Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}
Rectangle::Rectangle(double w, double h, Color color_, bool filled_) :width{ w }, height{ h }, Shape{ color_ , filled_ }{//派生类调用基类的Ctor
}

double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }
void Rectangle::setWidth(double w) {
	width = w;
}
void Rectangle::setHeight(double h) {
	height = h;
}
double Rectangle::getArea() { return width * height; }
string Rectangle::toString() {
  return ("Rectangle: width " + std::to_string(width) + ", "
    + "height " + std::to_string(height) + ", "
    + colorToString() + " " + filledToString());
}