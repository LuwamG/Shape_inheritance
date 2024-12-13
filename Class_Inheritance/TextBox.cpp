#include "TextBox.hpp"
#include "Widget.hpp"
#include <iostream>
using namespace std;
string TextBox::getValue() {
	//protected members: ok
	//this->width = 10
		//private members:no
		return value;
}
void TextBox::setValue(const string& value) {
	this->value = value;
}
//TextBox::TextBox(const string& value) :value{ value }, Widget(true) : Widget(enabled), value{ value } {

TextBox::~TextBox() {
	cout << "text deconstructed " << endl;
}
TextBox::TextBox(bool enabled, const string& value):Widget(true):Widget(enabled), value{value} {

}
TextBox::TextBox() {
	cout << "TextBox constructed" << endl;
}
Textbox::draw()const {

}
