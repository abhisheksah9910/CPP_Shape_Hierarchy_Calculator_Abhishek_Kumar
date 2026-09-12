#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w);

    double area() const override;
    double perimeter() const override;
    void display() const override;
};