#include "DanhSach.h"
#include <iostream>
using namespace std;

DanhSach::~DanhSach()
{
}

void DanhSach::Nhap()
{
    cout << "Nhap so luong nguoi: ";
    cin >> iSoLuong;

    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "Nhap nguoi thu " << i + 1 << endl;
        cout << "SinhVien(1) - HocSinh(2) - CongNhan(3) - NgheSi(4)" << endl;
        cin >> Loai[i];

        if (Loai[i] == 1)
        {
            ds[i] = new SinhVien;
            ((SinhVien *)ds[i])->Nhap();
        }
        if (Loai[i] == 2)
        {
            ds[i] = new HocSinh;
            ((HocSinh *)ds[i])->Nhap();
        }
        if (Loai[i] == 3)
        {
            ds[i] = new HocSinh;
            ((CongNhan *)ds[i])->Nhap();
        }
        if (Loai[i] == 4)
        {
            ds[i] = new HocSinh;
            ((NgheSi *)ds[i])->Nhap();
        }
        cout << endl;
    }
}

void DanhSach::Xuat()
{
    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "STT: " << i + 1 << endl;
        if (Loai[i] == 1)
            ((SinhVien *)ds[i])->Xuat();
        if (Loai[i] == 2)
            ((HocSinh *)ds[i])->Xuat();
        if (Loai[i] == 3)
            ((CongNhan *)ds[i])->Xuat();
        if (Loai[i] == 4)
            ((NgheSi *)ds[i])->Xuat();
        cout << endl;
    }
}
