#pragma once
#include <iostream>
using namespace std;

class Nguoi
{
protected:
    string HoTen;
    int NamSinh;
    string GioiTinh;

public:
    // Nguoi();
    // ~Nguoi();
    void Nhap(), Xuat();
};