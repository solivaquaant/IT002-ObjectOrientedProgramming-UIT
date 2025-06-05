#include <iostream>
#include "DaThuc.h"
using namespace std;

DaThuc::DaThuc()
{
}

DaThuc::DaThuc(int Bac)
{
    this->Bac = Bac;
    HeSo = new double[Bac + 1];
}

DaThuc::~DaThuc()
{
    delete[] HeSo;
}

DaThuc::DaThuc(const DaThuc &dt)
{
    Bac = dt.Bac;
    HeSo = new double[Bac + 1];
    for (int i = 0; i <= Bac; i++)
        HeSo[i] = dt.HeSo[i];
}

DaThuc::DaThuc(int bac, double *heso) : Bac(bac)
{
    HeSo = new double[Bac + 1];
    for (int i = 0; i <= Bac; i++)
    {
        HeSo[i] = heso[i];
    }
}

istream &operator>>(istream &is, DaThuc &dt)
{
    cout << "Nhap Bac cua da thuc: ";
    is >> dt.Bac;
    dt.HeSo = new double[dt.Bac + 1];

    for (int i = dt.Bac; i >= 0; i--)
    {
        cout << "Nhap he so cua x^" << i << ": ";
        is >> dt.HeSo[i];
    }
    return is;
}

ostream &operator<<(ostream &os, DaThuc dt)
{
    for (int i = dt.Bac; i >= 0; i--)
    {
        if (dt.HeSo[i] != 0)
        {
            if (i != dt.Bac && dt.HeSo[i] > 0)
                os << " + ";
            if (dt.HeSo[i] < 0)
                os << " - ";
            if (abs(dt.HeSo[i]) != 1 || i == 0)
                os << abs(dt.HeSo[i]);
            if (i > 1)
                os << "x^" << i;
            else if (i == 1)
                os << "x";
        }
    }
    return os;
}

DaThuc DaThuc::operator+(DaThuc dt)
{
    int bac_max = max(Bac, dt.Bac);
    double *heso_tong = new double[bac_max + 1]();
    for (int i = 0; i <= bac_max; i++)
    {
        if (i <= Bac)
            heso_tong[i] += HeSo[i];
        if (i <= dt.Bac)
            heso_tong[i] += dt.HeSo[i];
    }
    DaThuc tong(bac_max, heso_tong);
    delete[] heso_tong;
    return tong;
}

DaThuc DaThuc::operator-(DaThuc dt)
{
    int bac_max = max(Bac, dt.Bac);
    double *heso_hieu = new double[bac_max + 1]();
    for (int i = 0; i <= bac_max; i++)
    {
        if (i <= Bac)
            heso_hieu[i] += HeSo[i];
        if (i <= dt.Bac)
            heso_hieu[i] -= dt.HeSo[i];
    }
    DaThuc hieu(bac_max, heso_hieu);
    delete[] heso_hieu;
    return hieu;
}

DaThuc DaThuc::operator*(DaThuc dt)
{
    int bac_tich = Bac + dt.Bac;
    double *heso_tich = new double[bac_tich + 1]();
    for (int i = 0; i <= Bac; i++)
    {
        for (int j = 0; j <= dt.Bac; j++)
        {
            heso_tich[i + j] += HeSo[i] * dt.HeSo[j];
        }
    }
    DaThuc tich(bac_tich, heso_tich);
    delete[] heso_tich;
    return tich;
}

KetQuaChia DaThuc::operator/(DaThuc dt)
{
    int bac_thuong = Bac - dt.Bac;
    double *heso_thuong = new double[bac_thuong + 1]();
    double *heso_du = new double[Bac + 1];

    for (int i = 0; i <= Bac; i++)
    {
        heso_du[i] = HeSo[i];
    }

    for (int i = bac_thuong; i >= 0; i--)
    {
        heso_thuong[i] = heso_du[i + dt.Bac] / dt.HeSo[dt.Bac];
        for (int j = 0; j <= dt.Bac; j++)
        {
            heso_du[i + j] -= heso_thuong[i] * dt.HeSo[j];
        }
    }

    int bac_du = Bac;
    while (bac_du >= 0 && heso_du[bac_du] == 0)
    {
        bac_du--;
    }
    DaThuc thuong(bac_thuong, heso_thuong);
    DaThuc du(bac_du, heso_du);
    delete[] heso_thuong;
    delete[] heso_du;
    return {thuong, du};
}
