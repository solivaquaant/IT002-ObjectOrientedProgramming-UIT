#include <iostream>
#include "TuGiac.h"
using namespace std;

void TuGiac::Nhap()
{
    cout << "Nhap toa do dinh 1: " << endl;
    cout << "Nhap x = ";
    cin >> dinh[0].x;
    cout << "Nhap y = ";
    cin >> dinh[0].y;

    cout << "Nhap toa do dinh 2: " << endl;
    cout << "Nhap x = ";
    cin >> dinh[1].x;
    cout << "Nhap y = ";
    cin >> dinh[1].y;

    cout << "Nhap toa do dinh 3: " << endl;
    cout << "Nhap x = ";
    cin >> dinh[2].x;
    cout << "Nhap y = ";
    cin >> dinh[2].y;

    cout << "Nhap toa do dinh 4: " << endl;
    cout << "Nhap x = ";
    cin >> dinh[3].x;
    cout << "Nhap y = ";
    cin >> dinh[3].y;
}

void TuGiac::Xuat()
{
    cout << "Toa do dinh 1: (" << dinh[0].x << ";" << dinh[0].y << ")" << endl;
    cout << "Toa do dinh 2: (" << dinh[1].x << ";" << dinh[1].y << ")" << endl;
    cout << "Toa do dinh 3: (" << dinh[2].x << ";" << dinh[2].y << ")" << endl;
    cout << "Toa do dinh 4: (" << dinh[3].x << ";" << dinh[3].y << ")" << endl;
}
