#pragma once
#include "TuGiac.h"
#include "HinhChuNhat.h"

class HinhVuong : public HinhChuNhat
{
private:
public:
    bool KiemTraHopLe()
    {
        int canh1 = dinh[1].x - dinh[0].x;
        int canh2 = dinh[3].y - dinh[0].y;

        return ((HinhChuNhat::KiemTraHopLe()) && (canh1 == canh2));
    }
    void Nhap();
    void Xuat();
};