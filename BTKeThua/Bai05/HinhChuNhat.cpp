#include "TuGiac.h"
#include "HinhChuNhat.h"
#include <iostream>
using namespace std;

void HinhChuNhat::Nhap()
{
    TuGiac::Nhap();
}

void HinhChuNhat::Xuat()
{
    if (KiemTraHopLe() == true)
        TuGiac::Xuat();
}
