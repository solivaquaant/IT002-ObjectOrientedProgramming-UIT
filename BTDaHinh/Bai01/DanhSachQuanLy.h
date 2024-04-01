#include <iostream>
#include "SinhVien.h"
#include "CaoDang.h"
#include "DaiHoc.h"
using namespace std;

class DanhSachQuanLy
{
private:
    int iSoLuongSv;
    int Loai[1000];
    SinhVien *DanhSach[];

public:
    void Nhap();
    void Xuat();
    void isTotNghiep();
    void isNotTotNghiep();
    void SVDaiHocDTBMax();
    void SVCaoDangDTBMax();
    void SoLuongSvKhongTotNghiep();
};