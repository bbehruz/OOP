#ifndef CASH_MACHINE_H
#define CASH_MACHINE_H
#include "check.h"

// Класс Кассовый аппарат
class CASH_MACHINE
{
    unsigned _number; // номер кассового аппарата
public:
    void set_number(unsigned number);
    int get_number() const;

    Check* numValue(Product &p, unsigned count);

};

#endif // CASH_MACHINE_H
