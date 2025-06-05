#pragma once
#include "TuGiac.h"

class HinhThang : public TuGiac
{
private:
public:
    bool KiemTraHopLe()
    {
        return ((dinh[0].y == dinh[1].y) && (dinh[2].y = dinh[3].y));
    }
    void Nhap();
    void Xuat();
};