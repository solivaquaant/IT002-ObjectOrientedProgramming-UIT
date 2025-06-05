#include "INTEGER.h"
using namespace std;

INTEGER::INTEGER()
{
}

INTEGER::~INTEGER()
{
}

INTEGER::INTEGER(float a)
{
    data = a;
}

istream &operator>>(istream &is, INTEGER &a)
{
    is >> a.data;
    return is;
}

ostream &operator<<(ostream &os, INTEGER a)
{
    os << a.data;
    return os;
}

INTEGER INTEGER::operator+(INTEGER a)
{
    INTEGER result;
    result.data = this->data + a.data;
    return result;
}
INTEGER INTEGER::operator-(INTEGER a)
{
    INTEGER result;
    result.data = this->data - a.data;
    return result;
}

INTEGER INTEGER::operator*(INTEGER a)
{
    INTEGER result;
    result.data = this->data * a.data;
    return result;
}

INTEGER INTEGER::operator/(INTEGER a)
{
    INTEGER result;
    result.data = this->data / a.data;
    return result;
}

INTEGER INTEGER::operator++()
{
    return INTEGER(data + 1);
}

INTEGER INTEGER::operator--()
{
    return INTEGER(data - 1);
}

bool INTEGER::operator==(INTEGER x)
{
    return (this->data == x.data);
}

bool INTEGER::operator!=(INTEGER x)
{
    return (this->data != x.data);
}

bool INTEGER::operator>=(INTEGER x)
{
    return (this->data >= x.data);
}

bool INTEGER::operator>(INTEGER x)
{
    return (this->data > x.data);
}

bool INTEGER::operator<=(INTEGER x)
{
    return (this->data <= x.data);
}

bool INTEGER::operator<(INTEGER x)
{
    return (this->data < x.data);
}
