#include <iostream>
#include <cmath>
#include "Diem.h"
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
    cout << "(" << HoanhDo << ";" << TungDo << ")" << endl;
}

double Diem::XuatHoanhDo()
{
    return HoanhDo;
}

double Diem::XuatTungDo()
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
