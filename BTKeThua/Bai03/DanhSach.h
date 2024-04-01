#include <iostream>
#include "Nguoi.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
using namespace std;

class DanhSach
{
private:
    int iSoLuong;
    int Loai[1000];
    Nguoi *ds[1000];

public:
    DanhSach();
    ~DanhSach();

    void Nhap();
    void Xuat();
};