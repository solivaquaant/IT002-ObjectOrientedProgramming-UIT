#pragma once
#include <iostream>
#include "KhachHang.h";
using namespace std;

class KhachC : public KhachHang
{
public:
    KhachC(string ten, int soLuong, int donGia)
    {
        this->Ten = ten;
        this->SoLuong = soLuong;
        this->DonGia = donGia;
        this->Tien = SoLuong * DonGia * 0.5 * 1.1;
    }
};