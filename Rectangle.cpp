#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle() {}

// Accessor methods
void Rectangle::setLength(float l) { length = l; }
void Rectangle::setWidth(float w) { width = w; }
float Rectangle::getLength() { return length; }
float Rectangle::getWidth() { return width; }

// Area calculation
float Rectangle::area() {
    return length * width;
}
             