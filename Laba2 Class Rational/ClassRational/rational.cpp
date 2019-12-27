#include "rational.h"
#include <sstream>  //для организации работы со строками

using namespace std;

Rational::Rational()
{
    this->a = 0;
    this->b = 1;
}

Rational::Rational (int num, int den)
{
    if((den<0) && (num>0))
    {
        num = -num;
        den = abs(den);
    }
    else
    if((num<0) && (den<0))
    {
        den = abs(den);
    }
    else
  /*  if (num == 0)
    {
        throw FractZero;
    }*/
  //  else
    if (den == 0)
    {
        a = 0; b = 1;
        throw InvalidValue;
    }

    a = num;
    b = den;
}

Rational Rational::operator +(const Rational &s) const
{
    Rational Sum;
    Sum.a = a * s.b + b * s.a;
    Sum.b = b * s.b;
    return Sum;
}

Rational Rational::operator -(const Rational &s) const
{
    Rational Sum;
    Sum.a = a * s.b - b * s.a;
    Sum.b = b * s.b;
    return Sum;
}

Rational Rational::operator *(const Rational &s) const
{
    Rational Sum;
    Sum.a = a * s.a;
    Sum.b = b * s.b;
    return Sum;
}

Rational Rational::operator /(const Rational &s) const
{
    Rational Sum;
    Sum.a = a * s.b;
    Sum.b = b * s.a;
    return Sum;
}

string Rational::getStr_a() const
{
    ostringstream ost; //для преобразования целых и дробных чисел в обычную std:string.
    ost << get_a();
    string s = ost.str();
    return s;
}

string Rational::getStr_b() const
{
    ostringstream ost;  //для преобразования целых и дробных чисел в обычную std:string.
    ost << get_b();
    string s = ost.str();
    return s;
}

string Rational::toStr() const
{
    string s;
    s = this->getStr_a() + "/" + this->getStr_b();
    return s;
}

void Rational::set_a(int n)
{
    this->a = n;
}

void Rational::set_b(int n)
{
    if (n == 0)
        throw InvalidValue;
    else {
        this->b = n;
    }
}

int Rational::get_a() const
{
    return this->a;
}

int Rational::get_b() const
{
    return this->b;
}

float Rational::toFlt() const
{
    float x;

    x = ((float)get_a()) / get_b();
    return x;
}

bool Rational::operator==(const Rational &s)
{
    bool c = false;
    if (a == s.a)
    {
        if (b == s.b){
        c = true; return c;}
    }
    return c;
}

bool Rational::operator>(const Rational &s)
{
    bool c = false;

    if (b == s.b) //знаменатели равны, а числители нет
    {
        if (a > s.a)
        {
            c = true;
            return c;
        }
    }

    if (a == s.a)  //числители равны, а знаменатели нет
    {
        if (b < s.b)
        {
            c = true;
            return c;
        }
    }

    int a1 = 0, b1 = 0, a2 = 0, b2 = 0;

    a1 = a * s.b;  b1 = b * s.b;
    a2 = s.a * b;  b2 = s.b * b;

    if (b1 == b2)
    {
        if (a1 > a2)
        {
            c = true;
            return c;
        }
    }

    return c;
}

bool Rational::operator<(const Rational &s)
{
    bool c = false;

    if (b == s.b) //знаменатели равны, а числители нет
    {
        if (a < s.a)
        {
            c = true;
            return c;
        }
    }

    if (a == s.a)  //числители равны, а знаменатели нет
    {
        if (b > s.b)
        {
            c = true;
            return c;
        }
    }

    int a1 = 0, b1 = 0, a2 = 0, b2 = 0;

    a1 = a * s.b;  b1 = b * s.b;
    a2 = s.a * b;  b2 = s.b * b;

    if (b1 == b2)
    {
        if (a1 < a2)
        {
            c = true;
            return c;
        }
    }

    return c;
}
