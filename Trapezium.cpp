#include "Trapezium.h"
#include <iostream>

using namespace std;

Trapezium::Trapezium(double x, double y, double z, double w, double ht)
    : a(x), b(y), c(z), d(w), h(ht)
{
}

double Trapezium::area() const
{
    return ((a + b) * h) / 2;
}

double Trapezium::perimeter() const
{
    return a + b + c + d;
}

void Trapezium::display() const
{
    cout << "\n----- Trapezium -----" << endl;
    cout << "Parallel Side 1 : " << a << endl;
    cout << "Parallel Side 2 : " << b << endl;
    cout << "Side 3          : " << c << endl;
    cout << "Side 4          : " << d << endl;
    cout << "Height          : " << h << endl;
    cout << "Area            : " << area() << endl;
    cout << "Perimeter       : " << perimeter() << endl;
}