#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class KiemChungVien : public NhanVien
{
private:
    int SoLoi;

public:
    void Nhap();
    void Xuat();
    int getLoai() { return 2; }
    int getLuong() { return LuongCoBan + SoLoi * 50000; }
};