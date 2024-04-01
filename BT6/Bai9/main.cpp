#include <iostream>
#include "INTEGER.h"
using namespace std;

main()
{
    INTEGER int1, int2(10);
    cout << "Nhap so nguyen 1 = ";
    cin >> int1;

    cout << "\n Cac phep toan: \n";
    cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;

    cout << "So nguyen thu 1 sau khi tang 1 don vi: " << ++int1 << endl;
    cout << "So nguyen thu 2 sau khi giam 1 don vi: " << --int2 << endl;

    cout << "So sanh giua 2 so nguyen: \n";
    if (int1 == int2)
        cout << int1 << " = " << int2 << endl;
    if (int1 != int2)
        cout << int1 << " != " << int2 << endl;
    if (int1 >= int2)
        cout << int1 << " >= " << int2 << endl;
    if (int1 > int2)
        cout << int1 << " > " << int2 << endl;
    if (int1 <= int2)
        cout << int1 << " <= " << int2 << endl;
    if (int1 < int2)
        cout << int1 << " < " << int2 << endl;
}