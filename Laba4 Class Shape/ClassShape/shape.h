#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape();
    float virtual Area() =0; // Расчет площади
    float virtual Perimeter() =0; // Расчет периметра
};

#endif // SHAPE_H
