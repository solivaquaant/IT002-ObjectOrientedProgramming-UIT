#include <iostream>
#include <cmath>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc sp1, sp2(2, 2);
    cout << "Nhap so thu nhat: " << endl;
    cin >> sp1;

    cout << "So phuc 1 = " << sp1 << endl;
    cout << "So phuc 2 = " << sp2 << endl;

    SoPhuc Tong = sp1 + sp2;
    cout << sp1 << " + " << sp2 << " = " << Tong << endl;
    SoPhuc Hieu = sp1 - sp2;
    cout << sp1 << " - " << sp2 << " = " << Hieu << endl;
    SoPhuc Tich = sp1 * sp2;
    cout << sp1 << " * " << sp2 << " = " << Tich << endl;
    SoPhuc Thuong = sp1 / sp2;
    cout << sp1 << "/ " << sp2 << " = " << Thuong << endl;
    
    if (sp1 == sp2)
        cout << "So phuc 1 = So phuc 2";
    if (sp1 != sp2)
        cout << "So phuc 1 != So phuc 2";
    if (sp1 >= sp2)
        cout << "So phuc 1 >= So phuc 2";
    if (sp1 > sp2)
        cout << "So phuc 1 > So phuc 2";
    if (sp1 <= sp2)
        cout << "So phuc 1 <= So phuc 2";
    if (sp1 < sp2)
        cout << "So phuc 1 < So phuc 2";
    return 0;
}