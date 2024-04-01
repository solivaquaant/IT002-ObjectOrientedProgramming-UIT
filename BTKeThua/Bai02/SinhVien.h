#pragma once
#include <iostream>
#include "Nguoi.h"
using namespace std;

class SinhVien : public Nguoi
{
private:
    string TruongDaiHoc;
    string NganhHoc;
    string MSSV;
    float DiemSo;

public:
    // SinhVien();
    // ~SinhVien();
    void Nhap(), Xuat();
};