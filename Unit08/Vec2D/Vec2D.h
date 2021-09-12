#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <exception>
#include <istream>
#include <ostream>
class Vec2D {
public:
  Vec2D();
  Vec2D(double, double);
  ~Vec2D();
private:
  double x_;
  double y_;
public:
  // ������ת��Ϊ�ַ�����ʽ��ʾ
  std::string toString();
  // �����ӷ�
  Vec2D add(const Vec2D& secondVec2D);
  // ��������ֵ�ļӷ�
  Vec2D add(double numeral);
  Vec2D operator+ (const Vec2D& secondVec2D);//���� operator+ : ���� +��������
  Vec2D operator+ (const double numeral);//���� operator+ : ���� +����������
  Vec2D& operator += (const Vec2D& secondVec2D); // �������ã���������(v1+=v2+=v3)����Ҫʵ��v1+=3.0+=v2��Ҫ��Ԫ;
  // ��������
  Vec2D subtract(const Vec2D& secondVec2D);
  Vec2D subtract(double numeral);
  Vec2D operator -(const Vec2D& secondVec2D);//���� operator-: ���� -��������
  Vec2D operator -(double numeral);//���� operator- : ���� -����������
  Vec2D& operator -=(const Vec2D& secondVec2D);
  // �������
  double dot(const Vec2D& secondVec2D);
  // ��������
  Vec2D multiply(double multiplier);
  double operator *(const Vec2D& secondVec2D);//���� operator*: ���� *��������
  Vec2D  operator *(double multiplier);//���� operator*: ���� *����������
  friend Vec2D operator *(double multiplier, Vec2D vec2d);//�������أ�by��Ԫ�������� operator*: ����������������
  // ������ֵ
  Vec2D negative();
  Vec2D operator -();
  // ��������1
  Vec2D& increase();
  Vec2D& operator ++();
  Vec2D operator ++(int dummy);
  // �����Լ�1
  Vec2D& decrease();
  Vec2D& operator --();
  Vec2D operator --(int dummy);
  // ��ȡ�����޸�����Ԫ��
  double& at(const int index);
  double& operator [] (const int& index);
  // �������ķ���������)
  double magnitude();
  operator double();
  // ��������x+��ļн�
  double direction();
  // �Ƚ����������ĳ��ȡ����firstVec2DС��secondVec2D������-1���������򷵻�1��������򷵻�0
  int compareTo(Vec2D secondVec2D);
  friend std::ostream& operator <<(std::ostream& os, const Vec2D& v);
  friend std::istream& operator >> (std::istream& is, Vec2D& v);
};
