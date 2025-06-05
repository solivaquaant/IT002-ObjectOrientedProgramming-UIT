#pragma once
#include "TuGiac.h"

class DanhSachHinh
{
private:
    int iSoLuong;
    int Loai;
    TuGiac *DanhSach[];

public:
    void Nhap();
    void Xuat();
};