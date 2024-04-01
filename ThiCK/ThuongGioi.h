#pragma once
#include "TieuTheGioi.h"
#include "HaGioi.h"
using namespace std;

class ThuongGioi : public TieuTheGioi
{
private:
    int iSoLuongHaGioi;
    HaGioi *DanhSachHaGioi[]; // vì Thượng Giới quản lí nhiều Hạ Giới

public:
    void Nhap();
    void NhapHaGioi();
    void Xuat();
    int getLoai() { return 1; }
    int getSoLuongHaGioi() { return iSoLuongHaGioi; }
    bool isThuongGioi()
    {
        return (LinhKhi >= 9 && TuChat >= 9);
    }
};