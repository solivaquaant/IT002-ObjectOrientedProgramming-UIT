#include "CVector.h"
#include <iostream>
using namespace std;

CVector::CVector()
{
    data = nullptr;
    size = 0;
}

CVector::CVector(int n)
{
    data = new double[n];
    size = n;
    for (int i = 0; i < size; i++)
    {
        data[i] = 0;
    }
}

CVector::~CVector()
{
    delete[] data;
}

double CVector::operator[](int i)
{
    return data[i];
}

int CVector::GetSize()
{
    return size;
}

CVector CVector::operator+(CVector vt)
{
    if (this->size != vt.size)
    {
        cout << "Khong the cong duoc!" << endl;
        return *this;
    }
    CVector result;
    result = *this;
    for (int i = 0; i < size; i++)
    {
        result.data[i] += vt.data[i];
    }
    return result;
}

CVector CVector::operator-(CVector vt)
{
    if (this->size != vt.size)
    {
        cout << "Khong the tru duoc!" << endl;
        return *this;
    }
    CVector result;
    result = *this;
    for (int i = 0; i < size; i++)
    {
        result.data[i] -= vt.data[i];
    }
    return result;
}

CVector CVector::operator*(CVector vt)
{
    if (this->size != vt.size)
    {
        cout << "Khong the nhan duoc!" << endl;
        return *this;
    }
    CVector result;
    result = *this;
    for (int i = 0; i < size; i++)
    {
        result.data[i] *= vt.data[i];
    }
    return result;
}

CVector CVector::operator*(const int k)
{
    CVector result;
    result = *this;
    for (int i = 0; i < size; i++)
    {
        result.data[i] *= k;
    }
    return result;
}

istream &operator>>(istream &is, CVector &vt)
{
    cout << "Nhap so chieu: ";
    is >> vt.size;
    vt.data = new double[vt.size];

    for (int i = 0; i < vt.size; i++)
    {
        cout << "Nhap vt[" << i << "] = ";
        is >> vt.data[i];
    }
    return is;
}

ostream &operator<<(ostream &os, CVector vt)
{
    os << "(";
    for (int i = 0; i < vt.size; i++)
    {
        if (i != vt.size - 1)
            os << vt.data[i] << " , ";
        else
        {
            os << vt.data[i];
        }
    }
    os << ")";
    return os;
}

