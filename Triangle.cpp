#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(double x, double y, double z)
    : a(x), b(y), c(z)
{
}

double Triangle::perimeter() const
{
    return a + b + c;
}

double Triangle::area() const
{
    double s = perimeter() / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::display() const
{
    cout << "\n----- Triangle -----" << endl;
    cout << "Sides      : " << a << " " << b << " " << c << endl;
    cout << "Area       : " << area() << endl;
    cout << "Perimeter  : " << perimeter() << endl;
}