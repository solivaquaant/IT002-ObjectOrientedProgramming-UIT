#include <iostream>
#include "CVector.h"
#include "CMatrix.h"
using namespace std;

main()
{
    CVector vt1;
    cout << "Nhap vecto: " << endl;
    cin >> vt1;
    cout << "Vecto vua nhap: " << vt1 << endl;

    CMatrix mt1, mt2;
    cout << "Nhap ma tran 1: ";
    cin >> mt1;
    cout << "Ma tran vua nhap: \n";
    cout << mt1;

    CMatrix tich1 = mt1 * vt1;
    cout << "Tich giua vector vua nhap va ma tran 1 : \n"
         << tich1 << endl;

    cout << "Nhap ma tran 2: ";
    cin >> mt2;
    cout << "Ma tran vua nhap: \n";
    cout << mt2;

    CMatrix tich2 = mt1 * mt2;
    cout << "Tich giua mt1 va mt2 = \n " << tich2;
}