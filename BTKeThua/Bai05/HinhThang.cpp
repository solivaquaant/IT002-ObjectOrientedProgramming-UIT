#include "TuGiac.h"
#include "HinhThang.h"
#include <iostream>
using namespace std;

void HinhThang::Nhap()
{
    TuGiac::Nhap();
}

void HinhThang::Xuat()
{
    if (KiemTraHopLe() == true)
        TuGiac::Xuat();
}
