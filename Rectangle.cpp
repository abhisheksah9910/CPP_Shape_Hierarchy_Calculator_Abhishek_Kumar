#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double l, double w)
    : length(l), width(w)
{
}

double Rectangle::area() const
{
    return length * width;
}

double Rectangle::perimeter() const
{
    return 2 * (length + width);
}

void Rectangle::display() const
{
    cout << "\n----- Rectangle -----" << endl;
    cout << "Length     : " << length << endl;
    cout << "Width      : " << width << endl;
    cout << "Area       : " << area() << endl;
    cout << "Perimeter  : " << perimeter() << endl;
}