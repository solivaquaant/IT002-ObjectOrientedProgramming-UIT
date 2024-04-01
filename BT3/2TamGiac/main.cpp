#include <iostream>
#include "TamGiac.h"
using namespace std;

main()
{
    TamGiac tamgiac1;
    Diem vector1;
    cout << "Nhap toa do diem Tam Giac: " << endl;
    tamgiac1.Nhap();
    cout << "Toa do Tam Giac vua nhap : " << endl;
    tamgiac1.Xuat();

    cout << "Nhap vector Tinh tien : " << endl;
    vector1.Nhap();
    cout << "Toa do Tam giac sau khi Tinh Tien : " << endl;
    tamgiac1.TinhTien(vector1).Xuat();

    double GocQuay;
    cout << "Nhap Goc quay : ";
    cin >> GocQuay;
    tamgiac1.Quay(GocQuay).Xuat();

    double HeSoPhongTo;
    cout << "Nhap He so Phong to : ";
    cin >> HeSoPhongTo;
    tamgiac1.PhongTo(HeSoPhongTo).Xuat();

    double HeSoThuNho;
    cout << "Nhap He so Thu nho : ";
    cin >> HeSoThuNho;
    tamgiac1.ThuNho(HeSoThuNho).Xuat();
}