#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class NVSanXuat : public NhanVien
{
private:
    int Luong;
    int LuongCanBan;
    int SoSanPham;

public:
    void TinhLuong();
    int getLuong() { return Luong; }
    void Nhap();
    void Xuat();
};