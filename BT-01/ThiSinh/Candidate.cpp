#include "Candidate.h"
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

void Candidate::Nhap()
{
    cin.ignore();
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    fflush(stdin);

    cout << "Nhap Ho Ten: ";
    cin >> HoTen;
    fflush(stdin);
    cout << "Nhap Ngay Thang Nam Sinh: ";
    cin >> NgayThangNamSinh;
    fflush(stdin);

    cout << "Nhap Diem Toan: ";
    cin >> DiemToan;
    cout << "Nhap Diem Van: ";
    cin >> DiemVan;
    cout << "Nhap Diem Anh: ";
    cin >> DiemAnh;
}

void Candidate::Xuat()
{
    cout << "MSSV: " << MSSV << endl;
    cout << "Ho va Ten: " << HoTen << endl;
    float sum = TongDiem();
    cout << "Tong diem: " << sum << endl;
}

float Candidate::TongDiem()
{
    float sum = DiemAnh + DiemToan + DiemVan;
    return sum;
}