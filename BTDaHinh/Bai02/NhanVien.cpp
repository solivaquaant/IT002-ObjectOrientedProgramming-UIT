#include <iostream>
#include "NhanVien.h"
using namespace std;

void NhanVien::Nhap()
{
    cin.ignore();
    cout << "Nhap ma nhan vien: ";
    getline(cin, MaNhanVien);
    fflush(stdin);
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "Nhap tuoi: ";
    cin >> Tuoi;
    cin.ignore();
    cout << "Nhap so dien thoai: ";
    getline(cin, SDT);
    fflush(stdin);
    cout << "Nhap email: ";
    getline(cin, Email);
    fflush(stdin);
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}

void NhanVien::Xuat()
{
    cout << "Ma nhan vien: " << MaNhanVien << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Tuoi: " << Tuoi << endl;
    cout << "So dien thoai: " << SDT << endl;
    cout << "Email: " << Email << endl;
    cout << "Luong co ban: " << LuongCoBan << endl;
}