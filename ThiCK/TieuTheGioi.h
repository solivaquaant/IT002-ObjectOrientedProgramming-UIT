#pragma once
#include <iostream>
using namespace std;

class TieuTheGioi
{
protected:
    int LinhKhi;
    int TuChat;
    int SucManh;
    int ChiSoSucManh;
    string Ten;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual int getLoai() = 0;

    int getChiSoSucManh() { return ChiSoSucManh; }
};