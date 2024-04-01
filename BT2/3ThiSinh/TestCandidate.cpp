#include "TestCandidate.h"
void TestCandidate::nhap()
{
    cout << "Nhap so thi sinh n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << ":\n";
        DanhSach[i].nhap();
    }
}
void TestCandidate::xuat()
{
    cout << "Danh sach thi sinh co tong diem > 15:\n";
    cout << "Ma\tTen\tNgay sinh\tToan\tVan\tAnh\tTong\n";
    for (int i = 0; i < n; i++)
        if (DanhSach[i].tongDiem() > 15)
            DanhSach[i].xuat();
}