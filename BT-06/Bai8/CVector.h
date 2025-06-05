#pragma once
#include <iostream>
using namespace std;

class CVector
{
private:
    double *data;
    int size;

public:
    CVector();
    CVector(int n);
    ~CVector();

    int GetSize();

    double operator[](int i);

    CVector operator+(CVector);
    CVector operator-(CVector);
    CVector operator*(CVector);
    CVector operator*(const int k);

    friend istream &operator>>(istream &is, CVector &vt);
    friend ostream &operator<<(ostream &os, CVector);
};
