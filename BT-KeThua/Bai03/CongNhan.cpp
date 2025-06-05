#include <iostream>
#include "CongNhan.h"
using namespace std;

void CongNhan::Nhap()
{
    Nguoi::Nhap();
    cout << "Nhap ten cong ty: ";
    getline(cin, CongTy);
    fflush(stdin);
    cout << "Nhap so luong: ";
    cin >> Luong;
}

void CongNhan::Xuat()
{
    Nguoi::Xuat();
    cout << "Cong ty: " << CongTy << endl;
    cout << "Muc luong: " << Luong << endl;
}