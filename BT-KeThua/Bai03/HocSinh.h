#pragma once
#include <iostream>
#include "Nguoi.h"
using namespace std;

class HocSinh : public Nguoi
{
private:
    string TruongHoc;
    string Lop;
    string DiemSo;

public:
    // HocSinh();
    // ~HocSinh();
    void Nhap(), Xuat();
};