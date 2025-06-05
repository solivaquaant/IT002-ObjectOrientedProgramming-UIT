#pragma once
#include <iostream>
using namespace std;

class KhachHang
{
    friend class DanhSachKhachHang;

protected:
    string Ten;
    int SoLuong;
    int DonGia;
    double Tien;
};