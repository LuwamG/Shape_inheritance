#include <iostream>
#include "Widget.hpp"
using namespace std;
Widget::Widget(bool enabled) :enabled{ enabled } {
	cout << "something" << endl;
}
void Widget::enable() {
	enabled = true;
}
void Widget::disable() {
	enabled = false;
}
Widget::Widget(bool enabled) :enabled{ enabled } {
	cout << "Widget constructed" << endl;
}
Widget::~Widget() {
	cout << "Widget destructed" << endl;
}
bool Widget::isEnable()const {
	return enabled;
}