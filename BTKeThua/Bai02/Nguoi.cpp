#include <iostream>
#include "Nguoi.h"
using namespace std;

void Nguoi::Nhap()
{
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "Nhap nam sinh: ";
    cin >> NamSinh;
    cin.ignore();
    cout << "Nhap gioi tinh: ";
    getline(cin, GioiTinh);
    fflush(stdin);
}

void Nguoi::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Nam sinh: " << NamSinh << endl;
    cout << "Gioi tinh: " << GioiTinh << endl;
}
