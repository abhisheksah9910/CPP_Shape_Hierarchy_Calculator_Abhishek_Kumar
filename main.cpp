#include <iostream>
#include <vector>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Trapezium.h"

using namespace std;

int main()
{
    vector<Shape*> shapes;
    int choice;

    do
    {
        cout << "\n========== Shape Calculator ==========\n";
        cout << "1. Add Circle\n";
        cout << "2. Add Rectangle\n";
        cout << "3. Add Triangle\n";
        cout << "4. Add Square\n";
        cout << "5. Add Parallelogram\n";
        cout << "6. Add Trapezium\n";
        cout << "7. Display All Shapes\n";
        cout << "8. Calculate Total Area\n";
        cout << "9. Calculate Total Perimeter\n";
        cout << "10. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double r;
            cout << "Enter Radius : ";
            cin >> r;

            if (r <= 0)
            {
                cout << "Invalid Radius! Radius must be greater than 0.\n";
            }
            else
            {
                shapes.push_back(new Circle(r));
                cout << "Circle Added Successfully!\n";
            }
            break;
        }

        case 2:
        {
            double l, w;

            cout << "Enter Length : ";
            cin >> l;

            cout << "Enter Width : ";
            cin >> w;

            if (l <= 0 || w <= 0)
            {
                cout << "Invalid Length or Width! Values must be greater than 0.\n";
            }
            else
            {
                shapes.push_back(new Rectangle(l, w));
                cout << "Rectangle Added Successfully!\n";
            }
            break;
        }

        case 3:
        {
            double a, b, c;

            cout << "Enter Three Sides : ";
            cin >> a >> b >> c;

            if (a <= 0 || b <= 0 || c <= 0)
            {
                cout << "All sides must be greater than 0.\n";
            }
            else if (a + b > c && a + c > b && b + c > a)
            {
                shapes.push_back(new Triangle(a, b, c));
                cout << "Triangle Added Successfully!\n";
            }
            else
            {
                cout << "Invalid Triangle!\n";
            }

            break;
        }

        case 4:
        {
            double side;

            cout << "Enter Side : ";
            cin >> side;

            if (side <= 0)
            {
                cout << "Invalid Side! Side must be greater than 0.\n";
            }
            else
            {
                shapes.push_back(new Square(side));
                cout << "Square Added Successfully!\n";
            }

            break;
        }

        case 5:
        {
            double base, side, height;

            cout << "Enter Base : ";
            cin >> base;

            cout << "Enter Side : ";
            cin >> side;

            cout << "Enter Height : ";
            cin >> height;

            if (base <= 0 || side <= 0 || height <= 0)
            {
                cout << "Invalid Dimensions! All values must be greater than 0.\n";
            }
            else
            {
                shapes.push_back(new Parallelogram(base, side, height));
                cout << "Parallelogram Added Successfully!\n";
            }

            break;
        }

                case 6:
        {
            double a, b, c, d, h;

            cout << "Enter Parallel Side 1 : ";
            cin >> a;

            cout << "Enter Parallel Side 2 : ";
            cin >> b;

            cout << "Enter Side 3 : ";
            cin >> c;

            cout << "Enter Side 4 : ";
            cin >> d;

            cout << "Enter Height : ";
            cin >> h;

            if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0)
            {
                cout << "Invalid Dimensions! All values must be greater than 0.\n";
            }
            else
            {
                shapes.push_back(new Trapezium(a, b, c, d, h));
                cout << "Trapezium Added Successfully!\n";
            }

            break;
        }

        case 7:
        {
            if (shapes.empty())
            {
                cout << "\nNo Shapes Added!\n";
            }
            else
            {
                cout << "\n========== Shape Details ==========\n";

                for (Shape* s : shapes)
                {
                    s->display();
                }
            }

            break;
        }

        case 8:
        {
            if (shapes.empty())
            {
                cout << "\nNo Shapes Added!\n";
            }
            else
            {
                double totalArea = 0;

                for (Shape* s : shapes)
                {
                    totalArea += s->area();
                }

                cout << "\nTotal Area = " << totalArea << endl;
            }

            break;
        }

        case 9:
        {
            if (shapes.empty())
            {
                cout << "\nNo Shapes Added!\n";
            }
            else
            {
                double totalPerimeter = 0;

                for (Shape* s : shapes)
                {
                    totalPerimeter += s->perimeter();
                }

                cout << "\nTotal Perimeter = " << totalPerimeter << endl;
            }

            break;
        }

        case 10:
        {
            cout << "\nThank You for using Shape Calculator!\n";
            break;
        }

        default:
        {
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

        }

    } while (choice != 10);

    for (Shape* s : shapes)
    {
        delete s;
    }

    shapes.clear();

    return 0;
}