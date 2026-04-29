#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length, width;

    // First rectangle using default constructor
    
    Rectangle rect1;
    cout << "Enter length of first rectangle: ";
    cin >> length;
    rect1.setLength(length);
    cout << "Enter width of first rectangle: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Area of first rectangle: " << rect1.area() << endl;

    // Second rectangle using overloaded constructor
    cout << "Enter length of second rectangle: ";
    cin >> length;
    cout << "Enter width of second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width);
    cout << "Area of second rectangle: " << rect2.area() << endl;

    return 0;
}