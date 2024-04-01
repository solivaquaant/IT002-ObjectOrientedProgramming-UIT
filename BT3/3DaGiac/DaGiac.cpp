#include "DaGiac.h"
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

DaGiac::DaGiac(int SoDinh)
{
    this->SoDinh = SoDinh;
    DanhSach = new Diem[SoDinh];
}

DaGiac::~DaGiac()
{
    delete[] DanhSach;
}

void DaGiac::Nhap()
{
    cout << "Nhap toa do cac dinh cua da giac: " << endl;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap toa do dinh thu " << i + 1 << ": " << endl;
        DanhSach[i].Nhap();
    }
}

void DaGiac::Xuat()
{
    for (int i = 0; i < SoDinh; i++)
    {
        DanhSach[i].Xuat();
        cout << "  ";
    }
}

void DaGiac::TinhTien(double x, double y)
{
    for (int i = 0; i < SoDinh; i++)
    {
        DanhSach[i].TinhTien(x, y);
    }
}

void DaGiac::Quay(double deg)
{
    double rad = deg * M_PI / 180;
    for (int i = 0; i < SoDinh; i++)
    {
        double xMoi = DanhSach[i].GetHoanhDo() * cos(rad) - DanhSach[i].GetTungDo() * sin(rad);
        double yMoi = DanhSach[i].GetHoanhDo() * sin(rad) + DanhSach[i].GetTungDo() * cos(rad);
        DanhSach[i].Set(xMoi, yMoi);
    }
}

void DaGiac::PhongTo(double k)
{
    for (int i = 0; i < SoDinh; i++)
    {
        double xMoi = DanhSach[i].GetHoanhDo() * k;
        double yMoi = DanhSach[i].GetTungDo() * k;
        DanhSach[i].Set(xMoi, yMoi);
    }
}

void DaGiac::ThuNho(double k)
{
    for (int i = 0; i < SoDinh; i++)
    {
        double xMoi = DanhSach[i].GetHoanhDo() * (1.0 / k);
        double yMoi = DanhSach[i].GetTungDo() * (1.0 / k);
        DanhSach[i].Set(xMoi, yMoi);
    }
}