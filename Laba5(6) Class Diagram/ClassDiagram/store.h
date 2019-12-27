#ifndef STORE_H
#define STORE_H
#include <string>
#include "Product.h"
#include "CASH_MACHINE.h"

using namespace std;

//  класс магазин
class Store
{
    string _name; // название магазина
    string _type; // тип магазина (продуктовый/мебельный и т.д.)
    string _director; // имя директора магазина
    vector <Product*> _pr; // товары
    vector <CASH_MACHINE*> c_m; // кассовый аппарат

public:
    // исключени¤
    enum ERRORS {
        NotAvailable, // товара нет в наличии
        NoProduct // товар не существует
    };

    Store();

    void set_name(string name);
    void set_type(string type1);
    void set_director(string director);

    // добавление товара в массив
    void add_product(Product *p1);
    // добавление кассы в массив
    void cashes(CASH_MACHINE *c1);
    // получение товара из массива
    Product get_product(unsigned i);
    // удаление товара из массива
    void delete_product(unsigned i);

    // доступ
    string get_name() const;
    string get_type() const;
    string get_director() const;

    // метод продажи товара в заданном количестве по заданному имени
    // вернет указатель на чек, содержащий сведения о продаже
    Check* sale(unsigned count, const std::string name);
};

#endif // STORE_H
