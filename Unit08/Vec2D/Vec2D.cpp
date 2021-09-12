#include "Vec2D.h"

Vec2D::Vec2D() {
  x_ = 0.0;
  y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
  x_ = x;
  y_ = y;
}

Vec2D::~Vec2D() {
}

// ������ת��Ϊ�ַ�����ʽ��ʾ
std::string Vec2D::toString() {
  return std::string("(" + std::to_string(x_) + ", "
    + std::to_string(y_) + ")");//to_string(double _Val)��<string>��
}

// �����ӷ�
Vec2D Vec2D::add(const Vec2D& secondVec2D) {
  return Vec2D(x_ + secondVec2D.x_, y_ + secondVec2D.y_);
}

// ��������ֵ�ӷ�
Vec2D Vec2D::add(double numeral) {
  return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

// ���������ӷ�
Vec2D Vec2D::operator+ (const Vec2D& secondVec2D) {
  return this->add(secondVec2D);
}

// ������������ֵ�ӷ�
Vec2D Vec2D::operator+ (const double numeral) {
  return this->add(numeral);
}

Vec2D& Vec2D:: operator += (const Vec2D& secondVec2D) { // v1 += v2;
  x_ += secondVec2D.x_;
  y_ += secondVec2D.y_;
  return (*this);
}
// ��������
Vec2D Vec2D::subtract(const Vec2D& secondVec2D) {
  return Vec2D(x_ - secondVec2D.x_, y_ - secondVec2D.y_);
}

// ��������ֵ
Vec2D Vec2D::subtract(double numeral) {
  return Vec2D(x_ - numeral, y_ - numeral);
}

// ������������
Vec2D Vec2D::operator -(const Vec2D& secondVec2D) {
  return this->subtract(secondVec2D);
}
// ������������ֵ
Vec2D Vec2D::operator -(double numeral) {
  return this->subtract(numeral);
}

Vec2D& Vec2D::operator -= (const Vec2D& secondVec2D) {
  x_ -= secondVec2D.x_;
  y_ -= secondVec2D.y_;
  return (*this);
}
// �������
double Vec2D::dot(const Vec2D& secondVec2D) {
  return (x_ * secondVec2D.x_ + y_ * secondVec2D.y_);
}

// ��������
Vec2D Vec2D::multiply(double multiplier) {
  return Vec2D(x_ * multiplier, y_ * multiplier);
}

double Vec2D::operator *(const Vec2D& secondVec2D) {
  return this->dot(secondVec2D);
}
Vec2D Vec2D::operator *(double multiplier) {
  return this->multiply(multiplier);
}

Vec2D operator *(double multiplier, Vec2D vec2d) {//��Ԫ��������Ҫ Vec2D::
  return vec2d.multiply(multiplier);
}
// ������ֵ
Vec2D Vec2D::negative() {
  return Vec2D(-x_, -y_);
}

Vec2D Vec2D::operator -() {
  return Vec2D(-this->x_, -this->y_);
}
// ��������1
Vec2D& Vec2D::increase() {
  x_++; y_++;
  return (*this);
}

Vec2D& Vec2D::operator++() {
  x_++; y_++;
  return (*this);
}
Vec2D Vec2D::operator ++(int dummy) {
  Vec2D temp{ *this };
  x_++; y_++;
  return temp;
}
// �����Լ�1
Vec2D& Vec2D::decrease() {
  x_--; y_--;
  return *this;
}
Vec2D& Vec2D::operator --() {
  return this->decrease();
}
Vec2D Vec2D::operator --(int dummy) { // ����ֵ
  Vec2D temp(*this);
  this->decrease();
  return temp;
}
// ��ȡ�����޸�����Ԫ��
double& Vec2D::at(const int index) {
  if (0 == index)
    return x_;
  else if (1 == index)
    return y_;
  else
    throw std::out_of_range("at() only accept 1 or 2 as parameter");
}
double& Vec2D::operator [] (const int& index) {
  return at(index);
}
// �������ķ���������)
double Vec2D::magnitude() {
  return sqrt(x_ * x_ + y_ * y_);
}

Vec2D::operator double() {
  return this->magnitude();
}

// ��������x+��ļн�
double Vec2D::direction() {
  return atan(y_ / x_);
}

// �Ƚ����������ĳ��ȡ����firstVec2DС��secondVec2D������-1���������򷵻�1��������򷵻�0
int Vec2D::compareTo(Vec2D secondVec2D) {
  double m1 = this->magnitude();
  double m2 = secondVec2D.magnitude();
  if (abs(m1 - m2) < 1e-10)
    return 0;
  else
    return (m1 > m2 ? 1 : -1);
}

std::ostream& operator <<(std::ostream& os, const Vec2D& v) { // cout << v1;
  os << "(" << v.x_ << ", " << v.y_ << ")";
  return os;
}
std::istream& operator >> (std::istream& is, Vec2D& v) {
  is >> v.x_ >> v.y_;
  return is;
}