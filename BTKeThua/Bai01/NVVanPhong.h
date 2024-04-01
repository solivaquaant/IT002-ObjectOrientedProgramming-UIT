#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class NVVanPhong : public NhanVien
{
private:
    int SoNgayLamViec;
    int Luong;

public:
    void TinhLuong();
    int getLuong() { return Luong; }
    void Nhap();
    void Xuat();
};