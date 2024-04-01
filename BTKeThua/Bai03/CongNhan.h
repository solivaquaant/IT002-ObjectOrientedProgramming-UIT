
#pragma once
#include <iostream>
#include "Nguoi.h"
using namespace std;

class CongNhan : public Nguoi
{
private:
    string CongTy;
    int Luong;

public:
    // CongNhan();
    // ~CongNhan();
    void Nhap();
    void Xuat();
};