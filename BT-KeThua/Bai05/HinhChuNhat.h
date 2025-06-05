#pragma once
#include "TuGiac.h"
#include "HinhBinhHanh.h"

class HinhChuNhat : public HinhBinhHanh
{
private:
public:
    bool KiemTraHopLe()
    {
        return ((HinhBinhHanh::KiemTraHopLe()) && (dinh[0].x == dinh[3].x && dinh[1].x == dinh[2].x));
    }
    void Nhap();
    void Xuat();
};