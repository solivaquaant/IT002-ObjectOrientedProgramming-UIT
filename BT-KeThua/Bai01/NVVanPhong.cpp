#include <iostream>
#include "NVVanPhong.h"
using namespace std;

void NVVanPhong::TinhLuong()
{
    Luong = SoNgayLamViec * 100000;
}

void NVVanPhong::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;
    TinhLuong();
}

void NVVanPhong::Xuat()
{
    NhanVien::Xuat();
    cout << "Luong: " << getLuong() << endl;
}