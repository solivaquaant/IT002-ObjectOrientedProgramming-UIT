#include <iostream>
#include "CTime.h"
using namespace std;

main()
{
    CTime time1, time2;

    cout << "Nhap Thoi gian 1 : " << endl;
    time1.Nhap();
    cout << "Thoi gian vua nhap la : " << endl;
    time1.Xuat();
    cout << endl;

    cout << "Nhap Thoi gian 2 : " << endl;
    time2.Nhap();
    cout << "Thoi gian vua nhap la : " << endl;
    time2.Xuat();
    cout << endl;

    int sec;
    cout << "Nhap so giay muon cong va tru : ";
    cin >> sec;
    cout << "Thoi gian 1 sau khi cong " << sec << " giay : ";
    time1.CongGiay(sec).Xuat();
    cout << endl;
    cout << "Thoi gian 1 sau khi tru " << sec << " giay : ";
    time1.TruGiay(sec).Xuat();
    cout << endl;

    cout << "Time 1 + Time 2 = ";
    time1.Cong(time2).Xuat();
    cout << endl;

    cout << "Time 1 - Time 2 = ";
    time1.Tru(time2).Xuat();
    cout << endl;

    cout << "Time 1 sau khi cong 1 giay: ";
    time1.Cong1Giay().Xuat();
    cout << endl;

    cout << "Time 1 sau khi cong 1 giay: ";
    time1.Tru1Giay().Xuat();
    cout << endl;
    cout << "Time1 - Time1 span = ";
    time1.TruCTime(time2).Xuat();
}