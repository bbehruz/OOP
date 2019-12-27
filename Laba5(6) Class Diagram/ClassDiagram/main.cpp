#include <iostream>
#include "store.h"
#include "product.h"
#include "toy.h"

using namespace std;

int main()
{
    string prName;
    unsigned count1 = 0; float price1 = 0;

    Store m1;
    m1.set_name("The products");
    m1.set_director("Ivanov P.V.");
    m1.set_type("Grocery Store"); // 'продуктовый магазин'

    for (unsigned i = 0; i < 2; i++) {
        Product* p = new Product();
        cout <<"Name product: ";
        cin >> prName;
        p->set_name(prName);
        cout <<"Count product: ";
        cin >> count1;
        p->set_count(count1);
        cout <<"Price product: ";
        cin >> price1;
        p->set_price(price1);
        m1.add_product(p);
        //delete p;
    }

    try {
        Check *ch = m1.sale(3, "Bread");
        delete ch;
    }
    catch (Store::ERRORS e) {
        if (e == Store::NoProduct)
            cout << "No product specified\n";
        if (e == Store::NotAvailable)
            cout << "The specified item is out of stock\n";
    }

    // Товар игрушка
    // 10 шт., 500 р, 6+, 50 г, материал пластик
    Toy *t1 = new Toy(10, "Spider-man", 500, 6, 50, "plastic");

    m1.add_product(t1);

    Check* ch = m1.sale(1, "Spider-man");
    delete ch;

}
