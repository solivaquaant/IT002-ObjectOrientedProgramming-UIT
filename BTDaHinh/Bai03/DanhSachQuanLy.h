#pragma once
#include <iostream>
#include "GiaSuc.h"
#include "Bo.h"

class DanhSachQuanLy
{
private:
    int iSoLuongGiaSuc;
    int Loai[1000];
    int SoLuongBo = 0, SoLuongCuu = 0, SoLuongDe = 0;
    int SoLuongSuaBo = 0, SoLuongSuaCuu = 0, SoLuongSuaDe = 0;
    GiaSuc *DanhSach[];

public:
    DanhSachQuanLy();
    void Keu();
    void SoLuongMoiLoai();
    void SoLuongSua();
};