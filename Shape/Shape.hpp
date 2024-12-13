#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    string background;  // Background color or pattern for the shape

public:
    // Getter for background
    string getBackground() const {
        return background;
    }

    // Setter for background
    void setBackground(const string& bg) {
        background = bg;
    }

    // Virtual function for drawing the shape
    virtual void draw() {
        cout << "Drawing a shape with background: " << background << endl;
    }

    // Virtual destructor
    virtual ~Shape() = default;
};

#endif
