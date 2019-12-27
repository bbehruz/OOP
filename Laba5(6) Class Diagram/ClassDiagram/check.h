#ifndef CHECK_H
#define CHECK_H
#include "product.h"
#include <vector>

// структура, содержащая данные о товаре
struct Tinfo {
    std::string _name; // название товара
    float _price; // цена товара
    unsigned _count; // кол-во продаж
    float cost; // стоимость покупки
};

// Класс Товарный Чек
class Check
{
    Tinfo info; // переменная типа с данными о товаре

public:
    Check();
    Check(std::string name, float price, unsigned count, float cost);

    void set_count(unsigned count);
    unsigned get_count() const;
    std::string get_name() const;
    float get_price() const;
    float get_cost() const;

    // Метод заполняет поля значениями, взятых из объекта класса Product
    // count - кол-во
    void set_info(Product &p, unsigned count);

};

#endif // CHECK_H
