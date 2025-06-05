#pragma once
#include <iostream>
#include "GiaSuc.h"
class Bo : public GiaSuc
{
private:
public:
    void Keu();
    int SinhCon();
    int SoLuongSua();
    int getLoai() { return 1; }
};