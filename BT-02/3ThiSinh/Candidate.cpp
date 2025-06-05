#include "Candidate.h"
#include <iostream>
void Candidate::nhap()
{
    fflush(stdin);
    cout << "Nhap ma thi sinh:";
    cin >> ma;
    cout << "Nhap ten thi sinh: ";
    cin >> ten;
    cout << "Nhap ngay thang nam sinh (dd/mm/yyyy): ";
    cin >> ngay >> thang >> nam;
    cout << "Nhap diem Toan: ";
    cin >> diemToan;
    cout << "Nhap diem Van: ";
    cin >> diemVan;
    cout << "Nhap diem Anh: ";
    cin >> diemAnh;
}
void Candidate::xuat()
{
    cout << ma << "\t" << ten << "\t" << ngay << "/" << thang << "/" << nam << "\t";
    cout << diemToan << "\t" << diemVan << "\t" << diemAnh << "\t" << tongDiem() << endl;
}
float Candidate::tongDiem()
{
    return diemToan + diemVan + diemAnh;
}