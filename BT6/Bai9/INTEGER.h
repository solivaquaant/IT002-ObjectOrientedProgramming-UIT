#pragma once
#include <iostream>
using namespace std;

class INTEGER
{
private:
    float data;

public:
    INTEGER();
    INTEGER(float);
    ~INTEGER();

    friend istream &operator>>(istream &is, INTEGER &);
    friend ostream &operator<<(ostream &os, INTEGER);

    INTEGER operator+(INTEGER);
    INTEGER operator-(INTEGER);
    INTEGER operator*(INTEGER);
    INTEGER operator/(INTEGER);

    INTEGER operator++();
    INTEGER operator--();

    bool operator==(INTEGER);
    bool operator!=(INTEGER);
    bool operator>=(INTEGER);
    bool operator>(INTEGER);
    bool operator<=(INTEGER);
    bool operator<(INTEGER);
};
