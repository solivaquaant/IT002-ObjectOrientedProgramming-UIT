#include <iostream>
#include "PhanSo.h"
using namespace std;

main()
{
    PhanSo A, B;
    cout << "Nhap Phan So A:" << endl;
    A.Nhap();
    cout << "Nhap Phan So B:" << endl;
    B.Nhap();

    cout << "Tong cua 2 Phan So  : ";
    A.Tong(B).Xuat();
    cout << "\n";
    cout << "Hieu cua 2 Phan So  : ";
    A.Hieu(B).Xuat();
    cout << "\n";
    cout << "Tich cua 2 Phan So  : ";
    A.Tich(B).Xuat();
    cout << "\n";
    cout << "Thuong cua 2 Phan So  : ";
    A.Thuong(B).Xuat();
    cout << "\n";
}