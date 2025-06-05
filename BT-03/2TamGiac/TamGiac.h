#pragma once
#include <iostream>
#include "Diem.h"
using namespace std;

class TamGiac
{
private:
    Diem A, B, C;

public:
    TamGiac();
    ~TamGiac();
    TamGiac(Diem, Diem, Diem);
    void Nhap(), Xuat();
    void Set(Diem x, Diem y, Diem z);
    void KiemTra(int &);
    TamGiac TinhTien(Diem);
    TamGiac Quay(double);
    TamGiac PhongTo(double), ThuNho(double);
};