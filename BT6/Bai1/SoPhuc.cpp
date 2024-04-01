#include <iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc(double thuc, double ao)
{
    Thuc = thuc;
    Ao = ao;
}

SoPhuc::~SoPhuc()
{
}

istream &operator>>(istream &is, SoPhuc &soPhuc)
{
    cout << "Nhap phan thuc: ";
    is >> soPhuc.Thuc;
    cout << "Nhap phan ao: ";
    is >> soPhuc.Ao;
    return is;
}

ostream &operator<<(ostream &os, SoPhuc soPhuc)
{
    if (soPhuc.Thuc == 0 && soPhuc.Ao == 0)
        os << "0";
    else if (soPhuc.Thuc != 0 && soPhuc.Ao == 0)
        os << soPhuc.Thuc;
    else if (soPhuc.Thuc == 0 && soPhuc.Ao != 0)
        os << soPhuc.Ao << "i";
    else
    {
        if (soPhuc.Ao > 0)
            os << soPhuc.Thuc << " + " << soPhuc.Ao << "i";
        else
            os << soPhuc.Thuc << " - " << abs(soPhuc.Ao) << "i";
    }
    return os;
}

SoPhuc SoPhuc::operator+(SoPhuc soPhuc)
{
    SoPhuc temp;
    temp.Thuc = this->Thuc + soPhuc.Thuc;
    temp.Ao = this->Ao + soPhuc.Ao;
    return temp;
}

SoPhuc SoPhuc::operator-(SoPhuc soPhuc)
{
    SoPhuc temp;
    temp.Thuc = this->Thuc - soPhuc.Thuc;
    temp.Ao = this->Ao - soPhuc.Ao;
    return temp;
}

SoPhuc SoPhuc::operator*(SoPhuc soPhuc)
{
    SoPhuc temp;
    temp.Thuc = (this->Thuc * soPhuc.Thuc) - (this->Ao * soPhuc.Ao);
    temp.Ao = (this->Thuc * soPhuc.Ao) + (this->Ao * soPhuc.Thuc);
    return temp;
}

SoPhuc SoPhuc::operator/(SoPhuc soPhuc)
{

    SoPhuc temp;
    temp.Thuc = (Thuc * soPhuc.Thuc + Ao * soPhuc.Ao) / (soPhuc.Thuc * soPhuc.Thuc + soPhuc.Ao * soPhuc.Ao);
    temp.Ao = (Ao * soPhuc.Thuc - Thuc * soPhuc.Ao) / (soPhuc.Thuc * soPhuc.Thuc + soPhuc.Ao * soPhuc.Ao);
    return temp;
}

bool SoPhuc::operator==(SoPhuc soPhuc)
{
    return (this->Modun() == soPhuc.Modun());
}
bool SoPhuc::operator!=(SoPhuc soPhuc)
{
    return (this->Modun() != soPhuc.Modun());
}
bool SoPhuc::operator>=(SoPhuc soPhuc)
{
    return (this->Modun() >= soPhuc.Modun());
}
bool SoPhuc::operator>(SoPhuc soPhuc)
{
    return (this->Modun() > soPhuc.Modun());
}
bool SoPhuc::operator<=(SoPhuc soPhuc)
{
    return (this->Modun() <= soPhuc.Modun());
}
bool SoPhuc::operator<(SoPhuc soPhuc)
{
    return (this->Modun() < soPhuc.Modun());
}
