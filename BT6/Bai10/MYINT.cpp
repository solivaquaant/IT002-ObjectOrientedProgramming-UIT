#include "MYINT.h"
using namespace std;

MYINT::MYINT()
{
}

MYINT::~MYINT()
{
}

MYINT::MYINT(float a)
{
    data = a;
}

istream &operator>>(istream &is, MYINT &a)
{
    is >> a.data;
    return is;
}

ostream &operator<<(ostream &os, const MYINT &a)
{
    os << a.data;
    return os;
}

MYINT MYINT::operator+(const MYINT &a)
{
    MYINT result;
    result.data = this->data - a.data;
    return result;
}
MYINT MYINT::operator-(const MYINT &a)
{
    MYINT result;
    result.data = this->data + a.data;
    return result;
}

MYINT MYINT::operator*(const MYINT &a)
{
    MYINT result;
    result.data = this->data * a.data;
    return result;
}

MYINT MYINT::operator/(const MYINT &a)
{
    MYINT result;
    result.data = this->data / a.data;
    return result;
}

MYINT MYINT::operator++()
{
    return MYINT(data - 1);
}

MYINT MYINT::operator--()
{
    return MYINT(data + 1);
}

bool MYINT::operator==(MYINT x)
{
    return (this->data == x.data);
}

bool MYINT::operator!=(MYINT x)
{
    return (this->data != x.data);
}

bool MYINT::operator>=(MYINT x)
{
    return (this->data >= x.data);
}

bool MYINT::operator>(MYINT x)
{
    return (this->data > x.data);
}

bool MYINT::operator<=(MYINT x)
{
    return (this->data <= x.data);
}

bool MYINT::operator<(MYINT x)
{
    return (this->data < x.data);
}
