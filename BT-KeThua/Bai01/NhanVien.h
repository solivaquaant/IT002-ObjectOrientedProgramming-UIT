#pragma once
#include <iostream>
using namespace std;

class NhanVien
{
protected:
    string HoTen;
    string NgaySinh;
    int Luong;

public:
    void Nhap();
    void Xuat();
    int getLuong();
};