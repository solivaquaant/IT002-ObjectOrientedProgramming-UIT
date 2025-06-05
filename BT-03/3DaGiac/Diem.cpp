#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem(double HoanhDo, double TungDo)
{
    this->HoanhDo = HoanhDo;
    this->TungDo = TungDo;
}

void Diem::Set(double HoanhDo, double TungDo)
{
    this->HoanhDo = HoanhDo;
    this->TungDo = TungDo;
}

double Diem::GetHoanhDo()
{
    return HoanhDo;
}

double Diem::GetTungDo()
{
    return TungDo;
}

void Diem::TinhTien(double x, double y)
{
    HoanhDo += x;
    TungDo += y;
}

void Diem::Nhap()
{
    cout << "Nhap Hoanh do : ";
    cin >> HoanhDo;
    cout << "Nhap Tung do : ";
    cin >> TungDo;
}

void Diem::Xuat()
{
    cout << "(" << HoanhDo << " , " << TungDo << ")";
}