#pragma once
#include <iostream>
using namespace std;

class NhanVien
{
protected:
    string MaNhanVien;
    string HoTen;
    int Tuoi;
    string SDT;
    string Email;
    int LuongCoBan;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual int getLoai() = 0;
    virtual int getLuong() = 0;
};