#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class SoPhuc
{
private:
    double Thuc, Ao;
    double Modun()
    {
        return sqrt(Thuc * Thuc + Ao * Ao);
    }

public:
    SoPhuc(double = 0, double = 0);
    ~SoPhuc();

    SoPhuc operator+(SoPhuc);
    SoPhuc operator-(SoPhuc);
    SoPhuc operator*(SoPhuc);
    SoPhuc operator/(SoPhuc);

    bool operator==(SoPhuc);
    bool operator!=(SoPhuc);
    bool operator>=(SoPhuc);
    bool operator>(SoPhuc);
    bool operator<=(SoPhuc);
    bool operator<(SoPhuc);

    friend istream &operator>>(istream &is, SoPhuc &);
    friend ostream &operator<<(ostream &os, SoPhuc);
};