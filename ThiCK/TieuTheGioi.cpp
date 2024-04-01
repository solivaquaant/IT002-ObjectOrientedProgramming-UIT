#include <iostream>
#include "TieuTheGioi.h"
using namespace std;

void TieuTheGioi::Nhap()
{
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, Ten);
    fflush(stdin);
    cout << "Nhap linh khi: ";
    cin >> LinhKhi;
    cout << "Nhap tu chat: ";
    cin >> TuChat;
    cout << "Nhap chi so suc manh: ";
    cin >> ChiSoSucManh;
}

void TieuTheGioi::Xuat()
{
    cout << "Chi so Linh khi: " << LinhKhi << endl;
    cout << "Chi so Tu chat: " << TuChat << endl;
    cout << "Chi so suc manh: " << ChiSoSucManh << endl;
}

// bool TieuTheGioi::isThuongGioi()
// {
//     return (LinhKhi >= 9 && TuChat >= 9);
// }
