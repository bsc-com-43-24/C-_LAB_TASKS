#include <iostream>
using namespace std;
class Box{
    public:
    Box();
    Box(const double newlength,const double newBreadth,const double newHeight);
    ~Box();
    double GetVolume();
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
    //overload + operator to add teo box objects.
     Box operator+(const Box& b);
    private:
    double length;//length of abox
    double breadth;// Breadth of a box
    double height;//Height of a box
};