#include <iostream>
#include <cmath>
#include "Diem.h"
#define PI 3.14
using namespace std;

Diem::Diem()
{
}

Diem::~Diem()
{
}

Diem::Diem(double x, double y)
{
    Set(x, y);
}

void Diem::Set(double x, double y)
{
    HoanhDo = x;
    TungDo = y;
}
void Diem::Nhap()
{
    cout << "Nhap Hoanh do = ";
    cin >> HoanhDo;
    cout << "Nhap Tung do = ";
    cin >> TungDo;
}

void Diem::Xuat()
{
    cout << "(" << HoanhDo << " , " << TungDo << ")";
}

double Diem::GetHoanhDo()
{
    return HoanhDo;
}

double Diem::GetTungDo()
{
    return TungDo;
}

Diem Diem::TinhTien(Diem vector)
{
    Diem DiemTinhTien;
    DiemTinhTien.HoanhDo = HoanhDo + vector.HoanhDo;
    DiemTinhTien.TungDo = TungDo + vector.TungDo;
    return DiemTinhTien;
}

Diem Diem::Quay(double GocQuay)
{
    double rad = GocQuay * M_PI / 180;
    Diem NewDiem;
    NewDiem.HoanhDo = GetHoanhDo() * cos(rad) - GetTungDo() * sin(rad);
    NewDiem.TungDo = GetHoanhDo() * sin(rad) + GetTungDo() * cos(rad);
    return NewDiem;
}