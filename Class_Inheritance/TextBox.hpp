#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP
#include <iostream>
class TextBox : public Widget {
public:
	TextBox()=default;
	//~TextBox();
	using Widget::Widget;
	explicit TextBox(bool enabled, const string& value);
	string getValue();
	void setValue(const string& value);
	void draw()const override;
private:
	string value;
};
#endif  