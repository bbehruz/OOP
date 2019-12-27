#include "shape.h"
#include "square.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int main()
{
    Square a;
    a.SetA(5);
    cout << "\nSide square = " << a.GetA() << endl;
    cout << "Perimeter square = " << a.Perimeter() << endl;
    cout << "Area square = " << a.Area() << endl;
    Circle b;
    b.SetR(3);
    cout << "\nRadius circle = " << b.GetR() << endl;
    cout << "Perimeter circle = " << b.Perimeter() << endl;
    cout << "Area circle = " << b.Area() << endl;
    cout << "Diameter circle = " << b.Diameter() << endl;
    Rectangle c;
    c.SetAll(5, 4);
    cout << "\nSide rectangle = " << c.GetA() << " and " << c.GetB() << endl;
    cout << "Perimeter rectangle = " << c.Perimeter() << endl;
    cout << "Area rectangle = " << c.Area() << endl;
    cout << "Diagonal rectangle = " << c.Diagonal() << endl;
}
