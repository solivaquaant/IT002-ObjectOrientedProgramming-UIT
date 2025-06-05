#include <iostream>
#include "DaThuc.h"
using namespace std;

main()
{
    DaThuc dathuc1, dathuc2;

    cout << "Nhap Da thuc 1 : " << endl;
    cin >> dathuc1;
    cout << "Da thuc vua nhap : " << dathuc1 << endl;

    cout << "Nhap Da thuc 2 : " << endl;
    cin >> dathuc2;
    cout << "Da thuc vua nhap : " << dathuc2 << endl;

    cout << "Da thuc 1 + Da thuc 2 = ";
    cout << dathuc1 + dathuc2 << endl;

    cout << "Da thuc 1 - Da thuc 2 = ";
    cout << dathuc1 - dathuc2 << endl;

    cout << "Da thuc 1 * Da thuc 2 = ";
    cout << dathuc1 * dathuc2 << endl;

    cout << "Da thuc 1 / Da thuc 2 = ";
    KetQuaChia kq = dathuc1 / dathuc2;
    cout << kq.thuong << endl;
    cout << "Phan du = ";
    cout << kq.du;
}