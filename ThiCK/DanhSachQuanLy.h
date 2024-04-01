#pragma once
#include <iostream>
#include "TieuTheGioi.h"
using namespace std;

class DanhSachQuanLy
{
private:
    int iSoLuong;
    int Loai[1000];
    TieuTheGioi *DanhSach[];

public:
    void Nhap();
    void Xuat();
    void TiemLucMax();
    void ThuongGioiCoNhieuHaGioiNhat();
};