#include <iostream>
#include "Points_Class.hpp"
using namespace std;


int Points::getX() {
	return x;
}
void Points::setValue(int& x, int& y) {
	this->x = x;
	this->y = y;
}
Points Points::operator+(const Points& other) {

	return;
}
Points Points::operator+(const int& other) {

}
