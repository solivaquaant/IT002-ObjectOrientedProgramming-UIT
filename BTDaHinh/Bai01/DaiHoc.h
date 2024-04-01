#pragma once
#include <iostream>
#include "SinhVien.h"
using namespace std;

class DaiHoc : public SinhVien
{
private:
    string TenLuanVan;
    float DiemLuanVan;

public:
    void Nhap(), Xuat();
    bool TotNghiep();
        int getLoai() { return 2; }

};