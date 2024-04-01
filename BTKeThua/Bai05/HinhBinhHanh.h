#pragma once
#include "TuGiac.h"
#include "HinhThang.h"

class HinhBinhHanh : public HinhThang
{
private:
public:
    bool KiemTraHopLe()
    {
        int CanhTren = dinh[1].x - dinh[0].x;
        int CanhDuoi = dinh[2].x - dinh[4].x;

        return ((HinhThang::KiemTraHopLe()) && (CanhDuoi == CanhTren));
    }
    void Nhap();
    void Xuat();
};