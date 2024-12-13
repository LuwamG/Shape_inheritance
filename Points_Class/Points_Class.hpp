#ifndef POINTS_CLASS_HPP
#define POINTS_CLASS_HPP
class Points {
public:
	Points operator+(const Points& other);
	Points operator+(const int& other);
	int getX();
	void setValue(int& x, int& y);

private:
	int x;
	int y;
};
#endif