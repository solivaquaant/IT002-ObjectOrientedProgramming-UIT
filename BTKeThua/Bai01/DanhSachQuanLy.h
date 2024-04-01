#pragma once
#include <iostream>
#include "NhanVien.h"
using namespace std;

class DanhSachQuanLy
{
private:
    int iSoLuong;
    int Loai[1000];
    NhanVien *DanhSach[];

public:
void Nhap();
void Xuat();


};