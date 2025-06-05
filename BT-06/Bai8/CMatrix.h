#pragma once
#include <iostream>
#include <vector>
#include "CVector.h"
using namespace std;

class CMatrix
{
private:
    double **data;
    int row;
    int col;

public:
    CMatrix();
    CMatrix(int m, int n);
    ~CMatrix();

    double *operator[](int);
    int getRow();
    int getCol();

    CMatrix operator+(const CMatrix &MT);
    CMatrix operator-(const CMatrix &MT);
    CMatrix operator*(const CMatrix &MT);
    CMatrix operator*(const int k);
    CMatrix operator*(CVector &vt);

    friend ostream &operator<<(ostream &os, const CMatrix &MT);
    friend istream &operator>>(istream &is, CMatrix &MT);
};