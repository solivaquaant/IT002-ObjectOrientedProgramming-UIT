#include <iostream>
#include "KiemChungVien.h"
#include "NhanVien.h"
using namespace std;

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so loi phat hien duoc: ";
    cin >> SoLoi;
}

void KiemChungVien::Xuat()
{
    NhanVien::Xuat();
    cout << "So loi phat hien duoc: " << SoLoi << endl;
    cout << "Luong: " << getLuong() << endl;
}