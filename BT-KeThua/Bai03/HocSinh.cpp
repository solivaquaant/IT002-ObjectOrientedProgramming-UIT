#include <iostream>
#include "HocSinh.h"
using namespace std;

void HocSinh::Nhap()
{
    Nguoi::Nhap();
    cout << "Nhap ten truong hoc: ";
    getline(cin, TruongHoc);
    fflush(stdin);
    cout << "Nhap ten lop: ";
    getline(cin, Lop);
    fflush(stdin);
    cout << "Nhap diem so: ";
    cin >> DiemSo;
}

void HocSinh::Xuat()
{
    Nguoi::Xuat();
    cout << "Truong: " << TruongHoc << endl;
    cout << "Lop: " << Lop << endl;
    cout << "Diem hoc tap: " << DiemSo << endl;
}