#pragma once
#include <iostream>
#include "KhachHang.h";
using namespace std;

class KhachA : public KhachHang
{
public:
    KhachA(string ten, int soLuong, int donGia)
    {
        this->Ten = ten;
        this->SoLuong = soLuong;
        this->DonGia = donGia;
        this->Tien = SoLuong * DonGia * 1.1;
    }
};