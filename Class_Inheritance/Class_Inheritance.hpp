#ifndef CLASS_INHERITANCE_HPP
#define CLASS_INHERITANCE_HPP
#include <iostream>
class Shape {
public:
	void getBackground();
	void setBackground();
private: 
	string background;

};
class Rectangle : public Shape {

};
class Circle : public Shape {

};
#endif