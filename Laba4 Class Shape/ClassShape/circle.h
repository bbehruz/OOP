#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
const float M_PI = 3.14159265358979323846;


class Circle :public Shape
{
    float _r;
public:
    Circle();
    float Area();
    float Perimeter();
    float Diameter() const;
    void SetR(float r);
    float GetR() const;
};

#endif // CIRCLE_H
