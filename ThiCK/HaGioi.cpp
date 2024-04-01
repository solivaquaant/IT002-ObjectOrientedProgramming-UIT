#include <iostream>
#include "HaGioi.h"
using namespace std;

void HaGioi::Nhap()
{
    do
    {
        TieuTheGioi::Nhap();
    } while (isHaGioi() != true);
    
}

void HaGioi::Xuat()
{
    cout << "Ten: " << Ten << endl;
    TieuTheGioi::Xuat();
    cout << endl;
}
