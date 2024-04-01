#pragma once
#include <iostream>
using namespace std;

class SinhVien
{
protected:
    int MSSV;
    string HoTen;
    string DiaChi;
    int TongSoTinChi;
    float DiemTrungBinh;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual bool TotNghiep() = 0;
    virtual int getLoai() = 0;
    float getDiemTrungBinh() { return DiemTrungBinh; }
};