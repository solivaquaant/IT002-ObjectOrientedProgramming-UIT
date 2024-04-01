#pragma once
#include "TieuTheGioi.h"

using namespace std;

class HaGioi : public TieuTheGioi
{
private:
public:
    void Nhap();
    void Xuat();
    int getLoai() { return 2; }

    bool isHaGioi()
    {
        return (LinhKhi < 9 && TuChat < 9);
    }

    bool DuDieuKienThuongGioi()
    {
        return ((LinhKhi >= 20 && TuChat >= 20) && ChiSoSucManh > 10000);
    }
};