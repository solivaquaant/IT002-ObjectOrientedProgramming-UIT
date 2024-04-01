#include <iostream>
#include "CTime.h"
using namespace std;

main()
{
    CTime time1, time2;

    cout << "Nhap Thoi gian 1 : " << endl;
    cin >> time1;
    cout << "Thoi gian vua nhap la : " << endl;
    cout << time1 << endl;

    cout << "Nhap Thoi gian 2 : " << endl;
    cin >> time2;
    cout << "Thoi gian vua nhap la : " << endl;
    cout << time2 << endl;

    int sec;
    cout << "Nhap so giay muon cong va tru : ";
    cin >> sec;
    cout << "Thoi gian 1 sau khi cong " << sec << " giay : ";
    cout << time1 + sec << endl;
    cout << "Thoi gian 1 sau khi tru " << sec << " giay : ";
    cout << time1 - sec << endl;

    cout << "Time 1 sau khi cong 1 giay: ";
    ++time1;
    cout << time1 << endl;

    cout << "Time 2 sau khi cong 1 giay: ";
    --time2;
    cout << time2 << endl;

    cout << "Time1 - Time1 = ";
    cout << time1 - time2;
}