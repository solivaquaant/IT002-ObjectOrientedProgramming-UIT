#include <iostream>
#include "CString.h"
using namespace std;

main()
{
    CString str1;
    CString str2("That La Vui");

    cout << "Nhap chuoi: ";
    cin >> str1;
    cout << "Chuoi vua nhap la: " << str1 << endl;
    // cout << str2;

    cout << "Chieu dai cua chuoi vua nhap la: " << str1.getLength() << endl;

    cout << "Noi hai chuoi  '" << str1 << "' va chuoi '" << str2 << "': ";
    CString str3 = str1 + str2;
    cout << str3 << endl;

    if (str1 == str2)
        cout << "str1 = str2";
    else
        cout << "str1 != str2";

    if (str1 >= str2)
        cout << "Chieu dai chuoi str1 >= chieu dai chuoi str2" << endl;
    if (str1 > str2)
        cout << "Chieu dai chuoi str1 > chieu dai chuoi str2" << endl;
    if (str1 <= str2)
        cout << "Chieu dai chuoi str1 <= chieu dai chuoi str2" << endl;
    if (str1 < str2)
        cout << "Chieu dai chuoi str1 < chieu dai chuoi str2" << endl;
}