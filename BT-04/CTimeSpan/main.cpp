#include <iostream>
#include "CTimeSpan.h"
using namespace std;

main()
{
    CTimeSpan Time1;
    CTimeSpan Time2(3, 20, 25, 40);

    cout << "Nhap Khoang thoi gian 1 :" << endl;
    Time1.Nhap();
    cout << "Khoang thoi gian vua nhap : " << endl;
    Time1.Xuat();

    cout << "Time1 + Time 2 = ";
    Time1.Cong(Time2).Xuat();
    cout << "Time1 - Time 2 = ";
    Time1.Tru(Time2).Xuat();

    cout << "So sanh Time1 va Time2 : " << endl;
    if (Time1.IsEqual(Time2))
        cout << "Time1 = Time2" << endl;
    if (Time1.IsDifferent(Time2))
        cout << "Time1 != Time2" << endl;
    if (Time1.GreaterThan(Time2))
        cout << "Time1 > Time2" << endl;
    if (Time1.GreaterEqualThan(Time2))
        cout << "Time1 >= Time2" << endl;
    if (Time1.LowerThan(Time2))
        cout << "Time1 < Time2" << endl;
    if (Time1.LowerEqualThan(Time2))
        cout << "Time1 <= Time2" << endl;
}