#include <iostream>
#include "DanhSachQuanLy.h"
#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
using namespace std;

DanhSachQuanLy::DanhSachQuanLy()
{
    cout << "Nhap so luong gia suc hien co: ";
    cin >> iSoLuongGiaSuc;

    for (int i = 0; i < iSoLuongGiaSuc; i++)
    {
        cout << "Bo (1) - Cuu (2) - De (3)" << endl;
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            DanhSach[i] = new (Bo);
            SoLuongBo++;
        }
        if (Loai[i] == 2)
        {
            DanhSach[i] = new (Cuu);
            SoLuongCuu++;
        }
        if (Loai[i] == 3)
        {
            DanhSach[i] = new (De);
            SoLuongDe++;
        }
    }
}

void DanhSachQuanLy::Keu()
{
    cout << "Cac tieng keu trong nong trai:" << endl;
    for (int i = 0; i < iSoLuongGiaSuc; i++)
    {
        if (Loai[i] == 1)
            ((Bo *)DanhSach[i])->Keu();
        if (Loai[i] == 2)
            ((Cuu *)DanhSach[i])->Keu();
        if (Loai[i] == 3)
            ((De *)DanhSach[i])->Keu();
    }
    cout << endl;
}

void DanhSachQuanLy::SoLuongMoiLoai()
{
    for (int i = 0; i < iSoLuongGiaSuc; i++)
    {
        if (Loai[i] == 1)
        {
            SoLuongBo += ((Bo *)DanhSach[i])->SinhCon();
        }
        if (Loai[i] == 2)
            SoLuongCuu += ((Cuu *)DanhSach[i])->SinhCon();
        if (Loai[i] == 3)
            SoLuongDe += ((De *)DanhSach[i])->SinhCon();
    }
    cout << "So luong Bo sau khi sinh: " << SoLuongBo << endl;
    cout << "So luong Cuu sau khi sinh: " << SoLuongCuu << endl;
    cout << "So luong De sau khi sinh: " << SoLuongDe << endl;
}

void DanhSachQuanLy::SoLuongSua()
{
    for (int i = 0; i < iSoLuongGiaSuc; i++)
    {
        if (Loai[i] == 1)
        {
            SoLuongSuaBo += ((Bo *)DanhSach[i])->SoLuongSua();
        }
        if (Loai[i] == 2)
            SoLuongSuaCuu += ((Cuu *)DanhSach[i])->SoLuongSua();
        if (Loai[i] == 3)
            SoLuongSuaDe += ((De *)DanhSach[i])->SoLuongSua();
    }
    cout << "So luong sua cua Bo: " << SoLuongSuaBo << endl;
    cout << "So luong sua cua Cuu: " << SoLuongSuaCuu << endl;
    cout << "So luong sua cua De: " << SoLuongSuaDe << endl;
}
