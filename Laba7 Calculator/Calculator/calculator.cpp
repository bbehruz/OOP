#include "calculator.h"

Calculator::Calculator()
{

}

void Calculator::SetValue(double value)
{
    this->_value=value;
}

double Calculator::GetValue()
{
    return this->_value;
}

void Calculator::operator+=(double value)
{
    this->SetValue(this->_value+value);
}

void Calculator::operator-=(double value)
{
    this->SetValue(this->_value-value);
}

void Calculator::operator*=(double value)
{
    this->SetValue(this->_value*value);
}

void Calculator::operator/=(double value)
{
    if(value!=0)
        this->SetValue(this->_value/value);
}

double Calculator::sinValue()
{
    return sin(this->_value * M_PI/180);
}

double Calculator::cosValue()
{
    return cos(this->_value * M_PI/180);
}

double Calculator::tgValue()
{
    return tan(this->_value * M_PI/180);
}

double Calculator::exprValue()
{
    return exp(this->_value);
}

double Calculator::lnValue()
{
    if (this->_value>0)
        return log(this->_value);
    else
        throw -3;
}

double Calculator::numberPI()
{
    return M_PI;
}

double Calculator::sqrtValue()
{
    if(this->_value>=0)
    {
        return sqrt(this->_value);
    }
    else
        throw -2;
}

double Calculator::sqrValue() {
    return _value *= _value;
}

