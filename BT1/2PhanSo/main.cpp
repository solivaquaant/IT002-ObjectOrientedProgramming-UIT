#include <iostream>
#include "PhanSo.h"
using namespace std;

main()
{
    PhanSo A, B;
    cout << "Nhap Phan So A: " << endl;
    A.Nhap();
    cout << "Nhap Phan So B: " << endl;
    B.Nhap();

    int kq;
    kq = A.SoSanh(B);

    if (kq == 0)
    {
        cout << "Hai phan so bang nhau: ";
        A.Xuat();
    }

    else if (kq > 0)
    {
        cout << "Phan so lon nhat la: " << endl;
        A.Xuat();
    }
    else
    {
        cout << "Phan so lon nhat la: " << endl;
        B.Xuat();
    }
    return 0;
}