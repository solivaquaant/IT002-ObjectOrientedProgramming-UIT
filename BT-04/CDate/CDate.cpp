#include <iostream>
#include "CDate.h"
using namespace std;

CDate::CDate()
{
}

CDate::~CDate()
{
}

CDate::CDate(int d, int m, int y)
{
    Ngay = d;
    Thang = m;
    Nam = y;
}

int CDate::MaxDay()
{
    if (Thang == 2)
    {
        if ((Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0))
            return 29;
        else
            return 28;
    }
    else if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)
        return 30;
    else
        return 31;
}

void CDate::Nhap()
{
    do
    {
        cout << "Nhap ngay = ";
        cin >> Ngay;
    } while (Ngay >= 31);

    do
    {
        cout << "Nhap thang = ";
        cin >> Thang;
    } while (Thang >= 12);
    do
    {
        cout << "Nhap nam = ";
        cin >> Nam;
    } while (Nam < 0);
}

void CDate::Xuat()
{
    cout << Ngay << " / " << Thang << " / " << Nam << endl;
}

CDate CDate::CongNgay(int n)
{
    CDate NewDate;
    NewDate.Ngay = Ngay;
    NewDate.Thang = Thang;
    NewDate.Nam = Nam;

    NewDate.Ngay += n;
    while (NewDate.Ngay > MaxDay())
    {
        NewDate.Ngay -= MaxDay();
        NewDate.Thang++;
        if (NewDate.Thang > 12)
        {
            NewDate.Thang = 1;
            NewDate.Nam++;
        }
    }
    return NewDate;
}

CDate CDate::TruNgay(int n)
{

    CDate NewDate;
    NewDate.Ngay = Ngay;
    NewDate.Thang = Thang;
    NewDate.Nam = Nam;

    NewDate.Ngay -= n;
    while (NewDate.Ngay < 1)
    {
        NewDate.Thang--;
        if (NewDate.Thang < 1)
        {
            NewDate.Thang = 12;
            NewDate.Nam--;
        }
        NewDate.Ngay += MaxDay();
    }
    return NewDate;
}

CDate CDate::Cong1Ngay()
{
    CDate NewDate;
    NewDate.Ngay = Ngay;
    NewDate.Thang = Thang;
    NewDate.Nam = Nam;
    NewDate = NewDate.CongNgay(1);
    return NewDate;
}

CDate CDate::Tru1Ngay()
{
    CDate NewDate;
    NewDate.Ngay = Ngay;
    NewDate.Thang = Thang;
    NewDate.Nam = Nam;
    NewDate = NewDate.TruNgay(1);
    return NewDate;
}

int CDate::KhoangCach(CDate date2)
{
    int d1 = Ngay + (153 * (Thang + 12 * ((14 - Thang) / 12) - 3) + 2) / 5 + 365 * (Nam + 4800 - ((14 - Thang) / 12)) + (Nam + 4800 - ((14 - Thang) / 12)) / 4 - (Nam + 4800 - ((14 - Thang) / 12)) / 100 + (Nam + 4800 - ((14 - Thang) / 12)) / 400 - 32045;
    int d2 = date2.Ngay + (153 * (date2.Thang + 12 * ((14 - date2.Thang) / 12) - 3) + 2) / 5 + 365 * (date2.Nam + 4800 - ((14 - date2.Thang) / 12)) + (date2.Nam + 4800 - ((14 - date2.Thang) / 12)) / 4 - (date2.Nam + 4800 - ((14 - date2.Thang) / 12)) / 100 + (date2.Nam + 4800 - ((14 - date2.Thang) / 12)) / 400 - 32045;
    return abs(d1 - d2);
}