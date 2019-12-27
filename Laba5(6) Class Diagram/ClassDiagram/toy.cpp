#include "toy.h"

Toy::Toy() {

}

Toy::Toy(unsigned count, const std::string &_name, float price, unsigned ageLimit,
    float weight, const std::string &material) {
    this->_count = count;
    _price = price;
    this->_name = _name;
    this->ageLimit = ageLimit;
    this->weight = weight;
    this->material = material;
}

void Toy::set_ageLimit(unsigned n) {
    ageLimit = n;
}

void Toy::set_weight(float weight1) {
    weight = weight1;
}

void Toy::set_material(std::string m1) {
    material = m1;
}

unsigned Toy::get_ageLimit() const {
    return ageLimit;
}

float Toy::get_weight() const {
    return weight;
}

std::string Toy::get_material() const {
    return material;
}

std::string Toy::data2string(Toy& t) {
    std::string s;
    return s = t.Product::data2string() + "\n" + std::to_string(weight) + "\n" +
        std::to_string(ageLimit) + "\n" + material + "\n";
}
