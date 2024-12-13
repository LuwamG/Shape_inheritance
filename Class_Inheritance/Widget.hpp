#ifndef WIDGET_HPP
#define WIDGET_HPP
class Widget {
public:
	//Widget() = default;
	Widget(bool enabled);
	~Widget();
	void enable();
	void disable();
	bool isEnable() const;
	short size;
	int position;
	virtual void draw()const;
private:
	bool enabled;
protected:
	int width;

};

#endif