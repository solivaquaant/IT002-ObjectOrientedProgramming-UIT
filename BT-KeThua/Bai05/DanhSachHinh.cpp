#include <iostream>
#include "DanhSachHinh.h"
#include "HinhThang.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"

using namespace std;

void DanhSachHinh::Nhap()
{
    cout << "Nhap so luong: ";
    cin >> iSoLuong;
    cout << "Hinh thang (1) - Hinh Binh Hanh (2) - Hinh Chu Nhat (3) - Hinh Vuong(4)" << endl;
    cin >> Loai;

    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "STT: " << i + 1 << endl;
        if (Loai == 1)
        {
            DanhSach[i] = new HinhThang;
            ((HinhThang *)DanhSach[i])->Nhap();
            if (((HinhThang *)DanhSach[i])->KiemTraHopLe() == false)
            {
                cout << "Toa do nhap vao khong hop le! Nhap lai!" << endl;
                delete[] DanhSach[i];
                i--;
            }
        }
        if (Loai == 2)
        {
            DanhSach[i] = new HinhBinhHanh;
            ((HinhBinhHanh *)DanhSach[i])->Nhap();
            if (((HinhBinhHanh *)DanhSach[i])->KiemTraHopLe() == false)
            {
                cout << "Toa do nhap vao khong hop le! Nhap lai!" << endl;
                delete[] DanhSach[i];
                i--;
            }
        }
        if (Loai == 3)
        {
            DanhSach[i] = new HinhChuNhat;
            ((HinhChuNhat *)DanhSach[i])->Nhap();
            if (((HinhChuNhat *)DanhSach[i])->KiemTraHopLe() == false)
            {
                cout << "Toa do nhap vao khong hop le! Nhap lai!" << endl;
                delete[] DanhSach[i];
                i--;
            }
        }
        if (Loai == 4)
        {
            DanhSach[i] = new HinhVuong;
            ((HinhVuong *)DanhSach[i])->Nhap();
            if (((HinhVuong *)DanhSach[i])->KiemTraHopLe() == false)
            {
                cout << "Toa do nhap vao khong hop le! Nhap lai!" << endl;
                delete[] DanhSach[i];
                i--;
            }
        }
    }
}

void DanhSachHinh::Xuat()
{
    for (int i = 0; i < iSoLuong; i++)
        DanhSach[i]->Xuat();
}
