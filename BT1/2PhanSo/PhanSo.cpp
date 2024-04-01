#include <iostream>
#include "PhanSo.h"
using namespace std;

int UCLN(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return UCLN(b, a % b);
}

void PhanSo::Nhap()
{
    cout << "Nhap tu so = ";
    cin >> tuso;
    cout << "Nhap mau so = ";
    cin >> mauso;
}

void PhanSo::RutGon()
{
    if (mauso == 0)
        return;
    int dau_tu, dau_mau;
    if (tuso >= 0)
        dau_tu = 1;
    else
        dau_tu = -1;
    if (mauso >= 0)
        dau_mau = 1;
    else
        dau_mau = -1;
    tuso = abs(tuso);
    mauso = abs(mauso);

    int g = UCLN(tuso, mauso);
    tuso = tuso / g;
    mauso = mauso / g;

    tuso = tuso * dau_tu * dau_mau;
}

void PhanSo::Xuat()
{
    if (tuso == mauso)
        cout << "1";
    else if (mauso == 1)
        cout << tuso;
    else
        cout << tuso << "/" << mauso;
}

int PhanSo::SoSanh(PhanSo b)
{
    double hieu;
    hieu = double(tuso) / double(mauso) - double(b.tuso) / double(b.mauso);
    if (hieu == 0.0)
        return 0;
    else if (hieu > 0)
        return 1;
    else
        return -1;
}