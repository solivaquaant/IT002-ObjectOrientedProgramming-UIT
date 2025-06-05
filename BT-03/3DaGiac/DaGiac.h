#ifndef DAGIAC_H
#define DAGIAC_H

#include "Diem.h"

class DaGiac
{
private:
    int SoDinh;
    Diem *DanhSach;

public:
    DaGiac(int SoDinh = 3);
    ~DaGiac();
    void Nhap();
    void Xuat();
    void TinhTien(double x, double y);
    void Quay(double deg);
    void PhongTo(double k);
    void ThuNho(double k);
};

#endif