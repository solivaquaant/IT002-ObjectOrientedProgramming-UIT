#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo()
{
    this->MauSo = 1;
    this->TuSo = 1;
}

PhanSo::~PhanSo()
{
}

int PhanSo::UCLN(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return UCLN(b, a % b);
}

void PhanSo::RutGon()
{
    if (MauSo == 0)
        return;
    int dau_tu, dau_mau;
    if (TuSo >= 0)
        dau_tu = 1;
    else
        dau_tu = -1;
    if (MauSo >= 0)
        dau_mau = 1;
    else
        dau_mau = -1;
    TuSo = abs(TuSo);
    MauSo = abs(MauSo);

    int g = UCLN(TuSo, MauSo);
    TuSo = TuSo / g;
    MauSo = MauSo / g;

    TuSo = TuSo * dau_tu * dau_mau;
}

PhanSo::PhanSo(int a)
{
    this->TuSo = a;
    this->MauSo = 1;
}

PhanSo::PhanSo(int ts, int ms)
{
    this->TuSo = ts;
    this->MauSo = ms;
}

PhanSo PhanSo::operator+(const PhanSo ps2)
{
    PhanSo result;
    result.TuSo = TuSo * ps2.MauSo + MauSo * ps2.TuSo;
    result.MauSo = MauSo * ps2.MauSo;
    result.RutGon();
    return result;
}

PhanSo PhanSo::operator-(const PhanSo ps2)
{
    PhanSo result;
    result.TuSo = TuSo * ps2.MauSo - MauSo * ps2.TuSo;
    result.MauSo = MauSo * ps2.MauSo;
    result.RutGon();
    return result;
}

PhanSo PhanSo::operator*(const PhanSo ps2)
{
    PhanSo result;
    result.TuSo = TuSo * ps2.TuSo;
    result.MauSo = MauSo * ps2.MauSo;
    result.RutGon();
    return result;
}

PhanSo PhanSo::operator/(const PhanSo ps2)
{
    PhanSo result;
    result.TuSo = TuSo * ps2.MauSo;
    result.MauSo = MauSo * ps2.TuSo;
    result.RutGon();
    return result;
}

bool PhanSo::operator==(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 == 0)
        return true;
    return false;
}

bool PhanSo::operator!=(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 != 0)
        return true;
    return false;
}

bool PhanSo::operator>(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 > 0)
        return true;
    return false;
}
bool PhanSo::operator>=(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 >= 0)
        return true;
    return false;
}

bool PhanSo::operator<(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 < 0)
        return true;
    return false;
}
bool PhanSo::operator<=(PhanSo ps2)
{
    float cmp1 = float(this->TuSo / this->MauSo);
    float cmp2 = float(ps2.TuSo / ps2.MauSo);
    if (cmp1 - cmp2 <= 0)
        return true;
    return false;
}

istream &operator>>(istream &is, PhanSo &ps)
{
    cout << "Nhap Tu so: ";
    is >> ps.TuSo;
    do
    {
        cout << "Nhap Mau so: ";
        is >> ps.MauSo;
    } while (ps.MauSo == 0);
    return is;
}

ostream &operator<<(ostream &os, const PhanSo &ps)
{
    if (ps.TuSo == ps.MauSo)
        os << "1";
    else if (ps.MauSo == 1)
        os << ps.TuSo;
    else
        os << ps.TuSo << "/" << ps.MauSo;
    return os;
}
