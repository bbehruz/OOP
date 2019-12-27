#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

// Класс Товар
class Product
{
protected:
    std::string _name;
    float _price;
    unsigned _count;

public:
    Product();
    void set_name(std::string name);
    void set_price(float price);
    void set_count(unsigned count);

    std::string get_name() const;
    float get_price() const;
    unsigned get_count() const;

    // преобразование в строку
    virtual std::string data2string();

};

#endif // PRODUCT_H
