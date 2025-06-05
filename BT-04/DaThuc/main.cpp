#include <iostream>
#include "DaThuc.h"
using namespace std;

main()
{
    DaThuc dathuc1, dathuc2;
    cout << "Nhap Da thuc 1 : " << endl;
    dathuc1.Nhap();
    cout << "Da thuc vua nhap : ";
    dathuc1.Xuat();

    cout << "Nhap Da thuc 2 : " << endl;
    dathuc2.Nhap();
    cout << "Da thuc vua nhap : ";
    dathuc2.Xuat();

    cout << "Da thuc 1 + Da thuc 2 = ";
    dathuc1.Cong(dathuc2).Xuat();

    cout << "Da thuc 1 - Da thuc 2 = ";
    dathuc1.Tru(dathuc2).Xuat();

    cout << "Da thuc 1 * Da thuc 2 = ";
    dathuc1.Nhan(dathuc2).Xuat();

    cout << "Da thuc 1 / Da thuc 2 = ";
    KetQuaChia kq = dathuc1.Chia(dathuc2);
    kq.thuong.Xuat();
    cout<<"Phan du = ";
    kq.du.Xuat();
}