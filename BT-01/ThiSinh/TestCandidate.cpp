#include <iostream>
#include "TestCandidate..h"

using namespace std;

void TestCandidate::Nhap()
{
    cout << "Nhap so luong Thi Sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        DanhSach[i].Nhap();
}

void TestCandidate::Xuat()
{
    for (int i = 0; i < n; i++)
        if (DanhSach[i].TongDiem() > 15)
            DanhSach[i].Xuat();
}