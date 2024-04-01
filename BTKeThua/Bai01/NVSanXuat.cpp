#include <iostream>
#include "NVSanXuat.h"
using namespace std;

void NVSanXuat::TinhLuong()
{
    Luong = LuongCanBan + SoSanPham * 5000;
}

void NVSanXuat::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so luong can ban: ";
    cin >> LuongCanBan;
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
    TinhLuong();
}

void NVSanXuat::Xuat()
{
    NhanVien::Xuat();
    cout << "Luong: " << getLuong() << endl;
}