#include "CaoDang.h"
#include "SinhVien.h"
using namespace std;

void CaoDang::Nhap()
{
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> DiemThiTotNghiep;
}

void CaoDang::Xuat()
{
    SinhVien::Xuat();
    cout << "Diem thi tot nghiep: " << DiemThiTotNghiep << endl;
}

bool CaoDang::TotNghiep()
{
    if ((TongSoTinChi >= 120) && (DiemTrungBinh >= 5.0) && (DiemThiTotNghiep >= 5.0))
        return true;
    return false;
}
