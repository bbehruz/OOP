#ifndef FUNC_H
#define FUNC_H

#include "rational.h"

namespace randArr {
    void genArTFract(Rational* a, unsigned n);  //заполнение массив объектов, а - массив объектов, n - кол-во элементов в массиве
    void out(Rational* a, unsigned n, std::string pth);  //запись массива объектов в файл, pth - имя файла
    Rational* inp(unsigned &n, std::string pth);  //чтение из файла массива объектов
}

#endif // FUNC_H
