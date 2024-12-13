#include "Class_Inheritance.hpp"
#include "Widget.hpp"
#include "TextBox.hpp"
using namespace std;

void showWidget(Widget& widget) {
	widget.draw();
}
int main() {
	TextBox box;
	Widget widget=box;//upcasting
	//TextBox box = widget; //not possible downcasting
	widget.disable();
}