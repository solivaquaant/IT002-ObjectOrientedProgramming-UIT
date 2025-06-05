#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class DanhSachQuanLy
{
private:
    int iSoLuongNV;
    int Loai[1000];
    NhanVien *DanhSach[];

public:
    void Nhap();
    void Xuat();
    void NVLuongThapHonLuongTB();
    void NVLuongMax();
    void NVLuongMin();
    void LTVLuongMax();
    void KCVLuongMin();
};