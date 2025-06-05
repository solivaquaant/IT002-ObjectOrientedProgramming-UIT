#include "SinhVien.h"
using namespace std;

void SinhVien::Nhap()
{
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);
    fflush(stdin);
    cout << "Nhap tong so tin chi: ";
    cin >> TongSoTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> DiemTrungBinh;
}

void SinhVien::Xuat()
{
    cout << "MSSV: " << MSSV << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Dia chi: " << DiaChi << endl;
    cout << "Tong so tin chi: " << TongSoTinChi << endl;
    cout << "Diem trung binh: " << DiemTrungBinh << endl;
}
