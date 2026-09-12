#pragma once

#include "Shape.h"

class Parallelogram : public Shape
{
private:
    double base;
    double side;
    double height;

public:
    Parallelogram(double b, double s, double h);

    double area() const override;
    double perimeter() const override;
    void display() const override;
};