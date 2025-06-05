#include <iostream>
#include "DanhSachQuanLy.h"
#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"
using namespace std;

void DanhSachQuanLy::Nhap()
{
    std::cout << "Nhap so luong nhan vien: ";
    cin >> iSoLuongNV;
    for (int i = 0; i < iSoLuongNV; i++)
    {
        std::cout << "Lap trinh vien (1) - Kiem chung  vienn  (2)" << endl;
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            DanhSach[i] = new (LapTrinhVien);
            DanhSach[i]->Nhap();
        }
        if (Loai[i] == 2)
        {
            DanhSach[i] = new (KiemChungVien);
            DanhSach[i]->Nhap();
        }
    }
}

void DanhSachQuanLy::Xuat()
{
    for (int i = 0; i < iSoLuongNV; i++)
    {
        std::cout << "STT: " << i + 1;
        DanhSach[i]->Xuat();
        std::cout << endl;
    }
}

void DanhSachQuanLy::NVLuongThapHonLuongTB()
{
    int LuongTB = 0;
    for (int i = 0; i < iSoLuongNV; i++)
    {
        LuongTB += DanhSach[i]->getLuong();
    }
    LuongTB /= iSoLuongNV;
    for (int i = 0; i < iSoLuongNV; i++)
    {
        if (DanhSach[i]->getLuong() < LuongTB)
            DanhSach[i]->Xuat();
    }
}

void DanhSachQuanLy::NVLuongMax()
{
    int LuongMax = DanhSach[0]->getLuong();
    int pos = 0;
    for (int i = 1; i < iSoLuongNV; i++)
    {
        if (DanhSach[i]->getLuong() > LuongMax)
        {
            LuongMax = DanhSach[i]->getLuong();
            pos = i;
        }
    }
    std::cout << "Nhan vien co luong cao nhat la: ";
    DanhSach[pos]->Xuat();
    std::cout << endl;
}

void DanhSachQuanLy::NVLuongMin()
{
    int LuongMin = DanhSach[0]->getLuong();
    int pos = 0;
    for (int i = 1; i < iSoLuongNV; i++)
    {
        if (DanhSach[i]->getLuong() < LuongMin)
        {
            LuongMin = DanhSach[i]->getLuong();
            pos = i;
        }
    }
    std::cout << "Nhan vien co luong thap nhat la: ";
    DanhSach[pos]->Xuat();
    std::cout << endl;
}

void DanhSachQuanLy::LTVLuongMax()
{
    int LuongMax = 0, pos = -1;
    for (int i = 1; i < iSoLuongNV; i++)
    {
        if ((DanhSach[i]->getLoai() == 1) && (DanhSach[i]->getLuong() > LuongMax))
        {
            LuongMax = DanhSach[i]->getLuong();
            pos = i;
        }
    }
    std::cout << "Lap trinh vien co luong cao nhat la: ";
    DanhSach[pos]->Xuat();
    std::cout << endl;
}

void DanhSachQuanLy::KCVLuongMin()
{
    int LuongMin = 0, pos = -1;
    for (int i = 1; i < iSoLuongNV; i++)
    {
        if ((DanhSach[i]->getLoai() == 2) && (DanhSach[i]->getLuong() < LuongMin))
        {
            LuongMin = DanhSach[i]->getLuong();
            pos = i;
        }
    }
    std::cout << "Kiem chung vien co luong thap nhat la: ";
    DanhSach[pos]->Xuat();
    std::cout << endl;
}