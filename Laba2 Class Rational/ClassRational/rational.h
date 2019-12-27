#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>

// Исключения
enum FractException { InvalidValue = 0, FractZero };

class Rational
{
private:
    int a, b; //a - числитель, b - знаменатель

public:
    Rational();
    Rational(int, int);  //создаёт дробь a/b
    Rational operator +(const Rational&) const;
    Rational operator -(const Rational&) const;
    Rational operator *(const Rational&) const;
    Rational operator /(const Rational&) const;

    std::string getStr_a() const;  //взять числитель в string
    std::string getStr_b() const;  //взять знаменатель в string
    std::string toStr() const;     //перевод дроби в string

    void set_a(int);  //задать числитель f1.set_a(2) - числитель = 2
    void set_b(int);  //задать знаменатель f1.set_b(8) - знаменатель = 8

    int get_a() const;     //взять числитель в int
    int get_b() const;     //взять знаменатель в int
    float toFlt() const;   //перевод дроби во float

    bool operator == (const Rational&);
    bool operator >  (const Rational&);
    bool operator <  (const Rational&);

};

#endif // RATIONAL_H
