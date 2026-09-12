#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r);

    double area() const override;
    double perimeter() const override;
    void display() const override;
};