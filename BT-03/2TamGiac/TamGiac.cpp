#include "TamGiac.h"
#include <cmath>
using namespace std;

TamGiac::TamGiac()
{
}

TamGiac::~TamGiac()
{
}

TamGiac::TamGiac(Diem x, Diem y, Diem z)
{
    Set(x, y, z);
}

void TamGiac::Set(Diem x, Diem y, Diem z)
{
    A = x;
    B = y;
    C = z;
}

void TamGiac::KiemTra(int &check)
{
    if (A.GetHoanhDo() == B.GetHoanhDo() == C.GetHoanhDo() || A.GetTungDo() == B.GetTungDo() == C.GetTungDo() || (A.GetHoanhDo() == B.GetHoanhDo() && A.GetTungDo() == B.GetTungDo()) || (B.GetHoanhDo() == C.GetHoanhDo() && B.GetTungDo() == C.GetTungDo()) || (A.GetHoanhDo() == C.GetHoanhDo() && A.GetTungDo() == C.GetTungDo()))
    {
        check = 1;
        cout << "Tam giac vua nhap khong ton tai! Vui long nhap lai. ";
    }
}

void TamGiac::Nhap()
{
    int check = 0;
    do
    {
        cout << "Nhap Toa do diem A : " << endl;
        A.Nhap();
        cout << "Nhap Toa do diem B : " << endl;
        B.Nhap();
        cout << "Nhap Toa do diem C : " << endl;
        C.Nhap();
        KiemTra(check);
    } while (check);
}

void TamGiac::Xuat()
{
    cout << "Toa do diem A : ";
    A.Xuat();
    cout << endl;
    cout << "Toa do diem B : ";
    B.Xuat();
    cout << endl;
    cout << "Toa do diem C : ";
    C.Xuat();
    cout << endl;
}

TamGiac TamGiac::TinhTien(Diem vector1)
{
    TamGiac TamGiacTinhTien;
    TamGiacTinhTien.A = A.TinhTien(vector1);
    TamGiacTinhTien.B = B.TinhTien(vector1);
    TamGiacTinhTien.C = C.TinhTien(vector1);
    return TamGiacTinhTien;
}

TamGiac TamGiac::Quay(double GocQuay)
{
    double rad = GocQuay * M_PI / 180;
    TamGiac NewTg;
    NewTg.A = A.Quay(GocQuay);
    NewTg.B = B.Quay(GocQuay);
    NewTg.C = C.Quay(GocQuay);
    return NewTg;
}

TamGiac TamGiac::PhongTo(double HeSo)
{
    TamGiac TamGiacPhongTo;
    TamGiacPhongTo.A.Set(A.GetHoanhDo() * HeSo, A.GetTungDo() * HeSo);
    TamGiacPhongTo.B.Set(B.GetHoanhDo() * HeSo, B.GetTungDo() * HeSo);
    TamGiacPhongTo.C.Set(C.GetHoanhDo() * HeSo, C.GetTungDo() * HeSo);
    return TamGiacPhongTo;
}

TamGiac TamGiac::ThuNho(double HeSo)
{
    TamGiac TamGiacThuNho;
    TamGiacThuNho.A.Set(A.GetHoanhDo() * (1.0 / HeSo), A.GetTungDo() * (1.0 / HeSo));
    TamGiacThuNho.B.Set(B.GetHoanhDo() * (1.0 / HeSo), B.GetTungDo() * (1.0 / HeSo));
    TamGiacThuNho.C.Set(C.GetHoanhDo() * (1.0 / HeSo), C.GetTungDo() * (1.0 / HeSo));
    return TamGiacThuNho;
}