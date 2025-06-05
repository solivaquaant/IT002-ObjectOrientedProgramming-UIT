#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    sophuc a, b, z;
    cout << "So Phuc A: " << endl;
    a.nhap();
    cout << "So Phuc B: " << endl;
    b.nhap();

    // cộng
    z = a;
    z.cong(b);
    a.xuat();
    cout << " + ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;
    // trừ
    z = a;
    z.tru(b);
    a.xuat();
    cout << " - ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;
    // nhân
    z = a;
    z.nhan(b);
    a.xuat();
    cout << " * ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;
    // chia
    z = a;
    z.chia(b);
    a.xuat();
    cout << " / ";
    b.xuat();
    cout << " = ";
    z.xuat();
    cout << endl;
    system("pause");
    return 0;
}