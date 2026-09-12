#pragma once

#include "Shape.h"

class Triangle : public Shape
{
private:
    double a;
    double b;
    double c;

public:
    Triangle(double x, double y, double z);

    double area() const override;
    double perimeter() const override;
    void display() const override;
};