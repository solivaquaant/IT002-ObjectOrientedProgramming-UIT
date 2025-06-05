#include <iostream>
#include "CTimeSpan.h"
using namespace std;

main()
{
    CTimeSpan Time1;
    CTimeSpan Time2(3, 20, 25, 40);

    cout << "Nhap Khoang thoi gian 1 :" << endl;
    cin >> Time1;
    cout << "Khoang thoi gian vua nhap : " << endl;
    cout << Time1 << endl;

    cout << "Time1 + Time 2 = " << Time1 + Time2;
    cout << "Time1 - Time 2 = " << Time1 - Time2;

    cout << endl;
    cout << "So sanh Time1 va Time2 : " << endl;
    if (Time1 == Time2)
        cout << "Time1 = Time2" << endl;
    if (Time1 != Time2)
        cout << "Time1 != Time2" << endl;
    if (Time1 > Time2)
        cout << "Time1 > Time2" << endl;
    if (Time1 >= Time2)
        cout << "Time1 >= Time2" << endl;
    if (Time1 < Time2)
        cout << "Time1 < Time2" << endl;
    if (Time1 <= Time2)
        cout << "Time1 <= Time2" << endl;
}