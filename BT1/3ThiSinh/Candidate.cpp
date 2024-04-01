#include "Candidate.h"
void Candidate::nhap()
{
    cin.ignore();
    cout << "Nhap MSSV: ";
    cin >> ma;
    cout << "Nhap Ho Ten: ";
    cin >> ten;
    cout << "Nhap Ngay Thang Nam Sinh: ";
    cin >> ngaysinh;
    cout << "Nhap Diem Toan: ";
    cin >> diemToan;
    cout << "Nhap Diem Van: ";
    cin >> diemVan;
    cout << "Nhap Diem Anh: ";
    cin >> diemAnh;
}

void Candidate::xuat()
{
    cout << ma << "\t" << ten << "\t" << ngaysinh << "\t";
    cout << diemToan << "\t" << diemVan << "\t" << diemAnh << "\t" << tongDiem() << endl;
}
float Candidate::tongDiem()
{
    return diemToan + diemVan + diemAnh;
}