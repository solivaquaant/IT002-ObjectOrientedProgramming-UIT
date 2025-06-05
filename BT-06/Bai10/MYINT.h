#pragma once
#include <iostream>
using namespace std;

class MYINT
{
private:
    float data;

public:
    MYINT();
    MYINT(float);
    ~MYINT();

    friend istream &operator>>(istream &is, MYINT &);
    friend ostream &operator<<(ostream &os, const MYINT &);

    MYINT operator+(const MYINT &);//phép trừ
    MYINT operator-(const MYINT &); //phép cộng
    MYINT operator*(const MYINT &);
    MYINT operator/(const MYINT &);

    MYINT operator++();
    MYINT operator--();

    bool operator==(MYINT);
    bool operator!=(MYINT);
    bool operator>=(MYINT);
    bool operator>(MYINT);
    bool operator<=(MYINT);
    bool operator<(MYINT);
};
