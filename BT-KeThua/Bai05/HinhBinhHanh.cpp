#include "TuGiac.h"
#include "HinhBinhHanh.h"
#include <iostream>
using namespace std;

void HinhBinhHanh::Nhap()
{
    TuGiac::Nhap();
   
}

void HinhBinhHanh::Xuat()
{
    if (KiemTraHopLe() == true)
        TuGiac::Xuat();
}
