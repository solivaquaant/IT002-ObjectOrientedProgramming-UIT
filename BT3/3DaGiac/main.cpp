#include <iostream>
#include "Diem.h"
#include "DaGiac.h"
using namespace std;

int main()
{
    int SoDinh;
    cout << "Nhap So dinh cua Da giac : ";
    cin >> SoDinh;
    
    DaGiac dagiac1(SoDinh);
    dagiac1.Nhap();
    cout << "Da giac vua nhap : ";
    dagiac1.Xuat();
    cout << endl;

    Diem vector1;
    cout << "Nhap vector Tinh tien : " << endl;
    vector1.Nhap();
    dagiac1.TinhTien(vector1.GetHoanhDo(), vector1.GetTungDo());
    cout << "Da giac sau khi tinh tien : " << endl;
    dagiac1.Xuat();
    cout << endl;

    int GocQuay;
    cout << "Nhap Goc quay : ";
    cin >> GocQuay;
    dagiac1.Quay(GocQuay);
    cout << "Da giac sau khi Quay " << GocQuay << " do : " << endl;
    dagiac1.Xuat();
    cout << endl;

    int HeSoPhongTo;
    cout << "Nhap He so Phong to : ";
    cin >> HeSoPhongTo;
    dagiac1.PhongTo(HeSoPhongTo);
    cout << "Da giac sau khi phong to " << HeSoPhongTo << " lan : " << endl;
    dagiac1.Xuat();
    cout << endl;

    int HeSoThuNho;
    cout << "Nhap He so Thu nho : ";
    cin >> HeSoThuNho;
    dagiac1.ThuNho(HeSoThuNho);
    cout << "Da giac sau khi thu nho " << HeSoThuNho << " lan : " << endl;
    dagiac1.Xuat();
    cout << endl;

    return 0;
}
