#include <iostream>
#include "CDate.h"
using namespace std;

main()
{
    CDate date1, date2;

    cout << "Nhap date1 : " << endl;
    cin >> date1;
    cout << endl;
    cout << "Ngay vua nhap la : " << date1 << endl;

    cout << "Nhap date2 : " << endl;
    cin >> date2;
    cout << endl;
    cout << "Ngay vua nhap la : " << date2 << endl;

    int SoNgay;
    cout << "Nhap So ngay = ";
    cin >> SoNgay;
    cout << "Ngay sau khi cong them " << SoNgay << " ngay la : ";
    cout << date1 + SoNgay << endl;
    cout << "Ngay sau khi tru di " << SoNgay << " ngay la : ";
    cout << date1 - SoNgay << endl;

    cout << "Date 1 sau khi cong them 1 ngay : " << endl;
    cout << ++date1 << endl;
    cout << "Date 2 sau khi tru di 1 ngay : " << endl;
    cout << --date2 << endl;
    
    cout << "Khoang cach giua hai ngay la : ";
    cout << date1 - date2;
}