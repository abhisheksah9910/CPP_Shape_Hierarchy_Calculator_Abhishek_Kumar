#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram(double b, double s, double h)
    : base(b), side(s), height(h)
{
}

double Parallelogram::area() const
{
    return base * height;
}

double Parallelogram::perimeter() const
{
    return 2 * (base + side);
}

void Parallelogram::display() const
{
    cout << "\n----- Parallelogram -----" << endl;
    cout << "Base       : " << base << endl;
    cout << "Side       : " << side << endl;
    cout << "Height     : " << height << endl;
    cout << "Area       : " << area() << endl;
    cout << "Perimeter  : " << perimeter() << endl;
}