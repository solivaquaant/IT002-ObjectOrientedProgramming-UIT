#include <iostream>
#include "DanhSachQuanLy.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
using namespace std;

void DanhSachQuanLy::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> iSoLuong;
    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "Nhan vien Van phong (1) - Nhan vien San xuat (2)" << endl;
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            DanhSach[i] = new NVVanPhong;
            ((NVVanPhong *)DanhSach[i])->Nhap();
        }
        if (Loai[i] == 2)
        {
            DanhSach[i] = new NVSanXuat;
            ((NVSanXuat *)DanhSach[i])->Nhap();
        }
        cout << endl;
    }
}

void DanhSachQuanLy::Xuat()
{
    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "Nhan vien thu " << i + 1 << endl;
        if (Loai[i] == 1)
            ((NVVanPhong *)DanhSach[i])->Xuat();
        if (Loai[i] == 2)
            ((NVSanXuat *)DanhSach[i])->Xuat();
        cout << endl;
    }
}