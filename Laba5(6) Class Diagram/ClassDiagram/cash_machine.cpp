#include "cash_machine.h"

void CASH_MACHINE::set_number(unsigned number) {
    _number = number;
}

int CASH_MACHINE::get_number() const {
    return _number;
}

Check* CASH_MACHINE::numValue(Product &p, unsigned count)  {

    Check* ch1 = new Check();

    ch1->set_info(p, count);
    std::cout << p.get_name() << "\n";
    std::cout << "Count: " << ch1->get_count() << "\n";
    std::cout << "Price: " << ch1->get_cost() << " p." << "\n";
    return ch1;
}
