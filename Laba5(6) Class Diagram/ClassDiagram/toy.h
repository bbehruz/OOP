#ifndef TOY_H
#define TOY_H

#include "product.h"

// класс игрушка
class Toy : public Product
{
    unsigned ageLimit; // ограничение по возрасту
    float weight; // вес игрушки
    std::string material; // материал игрушки

public:
    Toy();
    Toy(unsigned count, const std::string &_name, float price, unsigned ageLimit,
        float weight, const std::string &material);

    void set_ageLimit(unsigned n);
    void set_weight(float weight1);
    void set_material(std::string m1);

    unsigned get_ageLimit() const;
    float get_weight() const;
    std::string get_material() const;

    // преобразование в строку
    std::string data2string(Toy &t);
};

#endif // TOY_H
