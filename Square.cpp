#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(double s)
    : side(s)
{
}

double Square::area() const
{
    return side * side;
}

double Square::perimeter() const
{
    return 4 * side;
}

void Square::display() const
{
    cout << "\n----- Square -----" << endl;
    cout << "Side       : " << side << endl;
    cout << "Area       : " << area() << endl;
    cout << "Perimeter  : " << perimeter() << endl;
}