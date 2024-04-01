#pragma once
#include <iostream>
#include "SinhVien.h"
using namespace std;

class CaoDang : public SinhVien
{
private:
    float DiemThiTotNghiep;

public:
    void Nhap(), Xuat();
    bool TotNghiep();
    int getLoai() { return 1; }
};