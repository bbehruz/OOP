#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"


class Rectangle :public Shape
{
    float _a;
    float _b;
public:
    Rectangle();
    float Area();
    float Perimeter();
    void SetA(float a);
    void SetB(float b);
    void SetAll(float a, float b);
    float GetA() const;
    float GetB() const;
    float Diagonal() const;
};

#endif // RECTANGLE_H
