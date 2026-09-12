#pragma once

#include "Shape.h"

class Trapezium : public Shape
{
private:
    double a;
    double b;
    double c;
    double d;
    double h;

public:
    Trapezium(double x, double y, double z, double w, double ht);

    double area() const override;
    double perimeter() const override;
    void display() const override;
};