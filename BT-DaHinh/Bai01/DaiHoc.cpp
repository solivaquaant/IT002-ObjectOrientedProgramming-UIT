#include "DaiHoc.h"
#include "SinhVien.h"
using namespace std;

void DaiHoc::Nhap()
{
    SinhVien::Nhap();
    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, TenLuanVan);
    fflush(stdin);
    cout << "Nhap diem luan van: ";
    cin >> DiemLuanVan;
}

void DaiHoc::Xuat()
{
    SinhVien::Xuat();
    cout << "Ten luan van: " << TenLuanVan << endl;
    cout << "Diem luan van: " << DiemLuanVan << endl;
}

bool DaiHoc::TotNghiep()
{
    if ((TongSoTinChi >= 170) && (DiemTrungBinh >= 5.0) && (DiemLuanVan >= 5.0))
        return true;
    return false;
}
