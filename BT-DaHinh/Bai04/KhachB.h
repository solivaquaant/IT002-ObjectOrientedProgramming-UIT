#pragma once
#include <iostream>
#include "KhachHang.h";
using namespace std;

class KhachB : public KhachHang
{
public:
    KhachB(string ten, int soLuong, int donGia, int Nam)
    {
        this->Ten = ten;
        this->SoLuong = soLuong;
        this->DonGia = donGia;
        double KhuyenMai = max(Nam * 0.05, 0.5);
        this->Tien = SoLuong * DonGia * (1-KhuyenMai)*1.1;
    }
};