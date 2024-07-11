#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double rectLength, double rectWidth)
        : length(rectLength), width(rectWidth) {
        std::cout << "Rectangle with length " << length << " and width " << width << " created." << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle with length " << length << " and width " << width << " destroyed." << std::endl;
    }

    // Getters (optional)
    double getLength() const { return length; }
    double getWidth() const { return width; }
};

int main() {
    Rectangle myRectangle(10.0, 5.0);
    return 0;
}
