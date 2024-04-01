#include <iostream>
#include "DanhSachQuanLy.h"
#include "SinhVien.h"
#include "CaoDang.h"
#include "DaiHoc.h"
using namespace std;

void DanhSachQuanLy::Nhap()
{
    cout << "Nhap so luong sinh vien: ";
    cin >> iSoLuongSv;
    for (int i = 0; i < iSoLuongSv; i++)
    {
        cout << "Sinh vien he cao dang  (1) - Sinh vien he dai hoc (2)" << endl;
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            DanhSach[i] = new CaoDang;
            ((CaoDang *)DanhSach[i])->Nhap();
        }
        if (Loai[i] == 2)
        {
            DanhSach[i] = new DaiHoc;
            ((DaiHoc *)DanhSach[i])->Nhap();
        }
    }
}

void DanhSachQuanLy::Xuat()
{

    for (int i = 0; i < iSoLuongSv; i++)
    {

        if (Loai[i] == 1)
            ((CaoDang *)DanhSach[i])->Xuat();
        if (Loai[i] == 2)
            ((DaiHoc *)DanhSach[i])->Xuat();
        cout << endl;
    }
}

void DanhSachQuanLy::isTotNghiep()
{
    for (int i = 0; i < iSoLuongSv; i++)
    {
        if (DanhSach[i]->TotNghiep() == true)
            DanhSach[i]->Xuat();
    }
}
void DanhSachQuanLy::isNotTotNghiep()
{
    for (int i = 0; i < iSoLuongSv; i++)
    {
        if (DanhSach[i]->TotNghiep() == false)
            DanhSach[i]->Xuat();
    }
}

void DanhSachQuanLy::SVDaiHocDTBMax()
{
    float DiemMax = 0;
    int pos = -1;
    for (int i = 0; i < iSoLuongSv; i++)
    {
        if (DanhSach[i]->getLoai() == 2) // SV Dai Hoc
            if (DanhSach[i]->getDiemTrungBinh() > DiemMax)
            {
                DiemMax = DanhSach[i]->getDiemTrungBinh();
                pos = i;
            }
    }
    DanhSach[pos]->Xuat();
}

void DanhSachQuanLy::SVCaoDangDTBMax()
{
    float DiemMax = 0;
    int pos = -1;
    for (int i = 0; i < iSoLuongSv; i++)
    {
        if (DanhSach[i]->getLoai() == 1)
            if (DanhSach[i]->getDiemTrungBinh() > DiemMax)
            {
                DiemMax = DanhSach[i]->getDiemTrungBinh();
                pos = i;
            }
    }
    DanhSach[pos]->Xuat();
}

void DanhSachQuanLy::SoLuongSvKhongTotNghiep()
{
    int cntCaoDang = 0, cntDaiHoc = 0;
    for (int i = 0; i < iSoLuongSv; i++)
    {
        if ((DanhSach[i]->getLoai() == 1) && (DanhSach[i]->TotNghiep() == false))
            cntCaoDang++;
        if ((DanhSach[i]->getLoai() == 2) && (DanhSach[i]->TotNghiep() == false))
            cntDaiHoc++;
    }
    cout << "So luong sinh vien Cao Dang chua du dieu kien tot nghiep: " << cntCaoDang << endl;
    cout << "So luong sinh vien Dai Hoc chua du dieu kien tot nghiep: " << cntDaiHoc << endl;
}
