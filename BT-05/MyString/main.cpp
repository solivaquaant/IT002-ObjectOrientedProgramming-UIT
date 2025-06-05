#include <iostream>
#include "MyString.h"
using namespace std;

main()
{
    MyString str1;
    MyString str2("That La Vui");

    cout << "Nhap chuoi: ";
    cin >> str1;
    cout << "Chuoi vua nhap la: " << str1 << endl;
    // cout << str2;

    cout << "Chieu dai cua chuoi vua nhap la: " << str1.getLength() << endl;

    cout << "Noi hai chuoi  '" << str1 << "' va chuoi '" << str2 << "': ";
    MyString str3 = str1 + str2;
    cout << str3 << endl;

    cout << "Dao chuoi '" << str3 << "' : ";
    MyString str4 = str3.Reverse();
    cout << str4;
}