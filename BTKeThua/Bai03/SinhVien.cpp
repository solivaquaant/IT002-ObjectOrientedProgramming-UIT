#include <iostream>
#include "SinhVien.h"
using namespace std;

void SinhVien::Nhap()
{
    Nguoi::Nhap();
    cout << "Nhap ten truong Dai hoc: ";
    getline(cin, TruongDaiHoc);
    fflush(stdin);
    cout << "Nhap nganh hoc: ";
    getline(cin, NganhHoc);
    fflush(stdin);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap diem so: ";
    cin >> DiemSo;
}

void SinhVien::Xuat()
{
    Nguoi::Xuat();
    cout << "Truong Dai hoc: " << TruongDaiHoc << endl;
    cout << "Nganh hoc: " << NganhHoc << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Diem hoc tap: " << DiemSo << endl;
}
