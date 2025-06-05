#include <iostream>
#include "LapTrinhVien.h"
#include "NhanVien.h"
using namespace std;

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio overtime: ";
    cin >> SoGioOverTime;
}

void LapTrinhVien::Xuat()
{
    NhanVien::Xuat();
    cout << "So gio overtime: " << SoGioOverTime << endl;
    cout << "Luong: " << getLuong() << endl;
}