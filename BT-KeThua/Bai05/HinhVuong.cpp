#include "TuGiac.h"
#include "HinhVuong.h"
#include <iostream>
using namespace std;

void HinhVuong::Nhap()
{
        TuGiac::Nhap();
}

void HinhVuong::Xuat()
{
        if (KiemTraHopLe() == true)
                TuGiac::Xuat();
}
