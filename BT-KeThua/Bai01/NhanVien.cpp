#include <iostream>
#include "NhanVien.h"
using namespace std;

void NhanVien::Nhap()
{
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "Nhap ngay sinh: ";
    getline(cin, NgaySinh);
    fflush(stdin);
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: " << NgaySinh << endl;
}