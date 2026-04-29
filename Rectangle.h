#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();
    // Overloaded constructor
    Rectangle(float l, float w);
    // Destructor
    ~Rectangle();

    // Accessors
    void setLength(float l);
    void setWidth(float w);
    float getLength();
    float getWidth();

    // Calculate area
    float area();
};

#endif