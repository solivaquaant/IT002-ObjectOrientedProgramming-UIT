#pragma once

#include <iostream>
using namespace std;

class Diem
{
private:
    double HoanhDo, TungDo;

public:
    Diem();
    ~Diem();
    Diem(double x, double y);
    void Set(double x, double y);
    void Nhap(), Xuat();
    double GetHoanhDo(), GetTungDo();
    Diem TinhTien(Diem vector);
    Diem Quay(double);
};
