#pragma once
#include <iostream>
#include <cstring>

class Candidate
{
private:
    int MSSV;
    char HoTen[30], NgayThangNamSinh[8];
    float DiemToan, DiemVan, DiemAnh;

public:
    float TongDiem();
    void Nhap(), Xuat();
};