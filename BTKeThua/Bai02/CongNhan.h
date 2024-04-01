
#pragma once
#include <iostream>
#include "Nguoi.h"
using namespace std;

class CongNhan : public Nguoi
{
private:
    string CongTy;
    float Luong;

public:
    // CongNhan();
    // ~CongNhan();
    void Nhap();
    void Xuat();
};