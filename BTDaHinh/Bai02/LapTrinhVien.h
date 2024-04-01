#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class LapTrinhVien : public NhanVien
{
private:
    int SoGioOverTime;

public:
    void Nhap();
    void Xuat();
    int getLoai() { return 1; }
    int getLuong() { return LuongCoBan + SoGioOverTime * 200000; }
};