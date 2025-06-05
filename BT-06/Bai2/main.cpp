#include <iostream>
#include "PhanSo.h"
using namespace std;

main()
{
    PhanSo ps1(2, 3), ps2(4);
    PhanSo ps3;

    cout << "Nhap ps3: " << endl;
    cin >> ps3;

    cout << "ps1 + ps2 = " << ps1 + ps2 << endl;
    cout << "ps1 - ps2 = " << ps1 - ps2 << endl;
    cout << "ps1 * ps2 = " << ps1 * ps2 << endl;
    cout << "ps1 / ps2 = " << ps1 / ps2 << endl;

    if (ps1 == ps2)
        cout << "ps1 = ps2" << endl;
    if (ps1 != ps2)
        cout << "ps1 != ps2" << endl;
    if (ps1 > ps2)
        cout << "ps1 > ps2" << endl;
    if (ps1 >= ps2)
        cout << "ps1 >= ps2" << endl;
    if (ps1 < ps2)
        cout << "ps1 < ps2" << endl;
    if (ps1 < ps2)
        cout << "ps1 <= ps2" << endl;
}