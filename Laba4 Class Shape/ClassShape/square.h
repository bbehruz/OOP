#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"


class Square :public Shape
{
    float _a;
public:
    Square();
    void SetA(float a);   // Setter [a]
    float GetA() const;        // Getter [a]
    float Area();
    float Perimeter();
};

#endif // SQUARE_H
