#include "CMatrix.h"
#include <iostream>
using namespace std;

CMatrix::CMatrix()
{
    cout << "Nhap so hang = ";
    cin >> row;
    cout << "Nhap so cot = ";
    cin >> col;
    this->data = new double *[row];
}

CMatrix::CMatrix(int m, int n)
{
    row = m;
    col = n;
    data = new double *[row];
    for (int i = 0; i < row; i++)
        data[i] = new double[col];
}

CMatrix::~CMatrix()
{
    for (int i = 0; i < row; i++)
        delete[] data[i];
    delete[] data;
}

double *CMatrix::operator[](int i)
{
    return data[i];
}

int CMatrix::getRow()
{
    return row;
}

int CMatrix::getCol()
{
    return col;
}

CMatrix CMatrix::operator+(const CMatrix &MT)
{
    if (row != MT.row || col != MT.col)
    {
        cout << "Khonng the cong duoc!" << endl;
        return *this;
    }
    CMatrix result;
    result = *this;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result.data[i][j] += MT.data[i][j];
        }
    }
    return result;
}

CMatrix CMatrix::operator-(const CMatrix &MT)
{
    if (row != MT.row || col != MT.col)
    {
        cout << "Khong the tru duoc!" << endl;
        return *this;
    }

    CMatrix result;
    result = *this;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result.data[i][j] -= MT.data[i][j];
        }
    }
    return result;
}
CMatrix CMatrix::operator*(const CMatrix &MT)
{
    if (col != MT.row)
    {
        cout << "Khong the nhan duoc!" << endl;
        return *this;
    }
    CMatrix result(row, MT.col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < MT.col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                result.data[i][j] += this->data[i][k] * MT.data[k][j];
            }
        }
    }
    return result;
}
CMatrix CMatrix::operator*(const int k)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            this->data[i][j] *= k;
        }
    }
    return *this;
}
CMatrix CMatrix::operator*(CVector &vt)
{
    CMatrix VT_To_MT(1, vt.GetSize());
    for (int i = 0; i < VT_To_MT.col; i++)
    {
        VT_To_MT.data[0][i] = vt[i];
    }
    return *this * VT_To_MT;
}
ostream &operator<<(ostream &os, const CMatrix &MT)
{
    for (int i = 0; i < MT.row; i++)
    {
        for (int j = 0; j < MT.col; j++)
        {
            os << MT.data[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

istream &operator>>(istream &is, CMatrix &MT)
{

    for (int i = 0; i < MT.row; i++)
        MT.data[i] = new double[MT.col];
    for (int i = 0; i < MT.row; i++)
        for (int j = 0; j < MT.col; j++)
            is >> MT.data[i][j];
    return is;
}