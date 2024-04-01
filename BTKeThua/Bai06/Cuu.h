#pragma once
#include <iostream>
#include "GiaSuc.h"
class Cuu : public GiaSuc
{
private:
public:
    void Keu();
    int SinhCon();
    int SoLuongSua();
    int getLoai() { return 2; }
};