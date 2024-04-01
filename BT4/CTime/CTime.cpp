#include <iostream>
#include "CTime.h"
using namespace std;

CTime::CTime()
{
    this->Gio = this->Phut = this->Giay = 0;
}
CTime::CTime(int h, int m, int s)
{
    this->Gio = h;
    this->Phut = m;
    this->Giay = s;
}
CTime::~CTime()
{
}
int CTime::GetGio()
{
    return this->Gio;
}
int CTime::GetPhut()
{
    return this->Phut;
}
int CTime::GetGiay()
{
    return this->Giay;
}
long CTime::GetTongPhut()
{
    return this->Phut + this->Gio * 60;
}
long CTime::GetTongGiay()
{
    return this->Giay + this->Phut * 60 + this->Gio * 60 * 60;
}
void CTime::Nhap()
{
    cout << "Nhap gio = ";
    cin >> Gio;
    cout << "Nhap phut = ";
    cin >> Phut;
    cout << "Nhap giay = ";
    cin >> Giay;
}
void CTime::Xuat()
{
    cout << Gio << " gio, " << Phut << " phut, " << Giay << " giay.";
}

CTime CTime::CongGiay(int sec)
{
    CTime NewTime;
    NewTime.Gio = Gio;
    NewTime.Phut = Phut;
    NewTime.Giay = Giay;
    NewTime.Giay += sec;
    NewTime.Phut += NewTime.Giay / 60;
    NewTime.Gio += NewTime.Gio / 60;
    NewTime.Phut %= 60;
    NewTime.Giay %= 60;
    return NewTime;
}

CTime CTime::TruGiay(int sec)
{
    CTime NewTime;
    NewTime.Gio = Gio;
    NewTime.Phut = Phut;
    NewTime.Giay = Giay;

    int temp = (NewTime.GetTongGiay() - sec);
    NewTime.Gio = (temp) / 3600;
    NewTime.Phut = (temp - 3600 * Gio) / 60;
    NewTime.Giay = temp % 60;
    return NewTime;
}

CTime CTime::Cong1Giay()
{
    int sec = 1;
    CTime NewTime;
    NewTime.Gio = Gio;
    NewTime.Phut = Phut;
    NewTime.Giay = Giay;
    NewTime.Giay += sec;
    NewTime.Phut += NewTime.Giay / 60;
    NewTime.Gio += NewTime.Gio / 60;
    NewTime.Phut %= 60;
    NewTime.Giay %= 60;
    return NewTime;
}

CTime CTime::Tru1Giay()
{
    int sec = 1;
    CTime NewTime;
    NewTime.Gio = Gio;
    NewTime.Phut = Phut;
    NewTime.Giay = Giay;

    int temp = (NewTime.GetTongGiay() - sec);
    NewTime.Gio = (temp) / 3600;
    NewTime.Phut = (temp - 3600 * Gio) / 60;
    NewTime.Giay = temp % 60;
    return NewTime;
}

CTime CTime::Cong(CTime &T2)
{
    CTime NewTime;
    NewTime.Giay = (Giay + T2.Giay) % 60;
    int carry = (Giay + T2.Giay) / 60;
    NewTime.Phut = (Phut + T2.Phut + carry) % 60;
    carry = (Phut + T2.Phut + carry) / 60;
    NewTime.Gio = Gio + T2.Gio + carry;
    return NewTime;
}

CTime CTime::Tru(CTime &T2)
{
    CTime NewTime;
    if (Giay < T2.Giay)
    {
        Phut--;
        Giay += 60;
    }
    NewTime.Giay = Giay - T2.Giay;
    if (Phut < T2.Phut)
    {
        Gio--;
        Phut += 60;
    }
    NewTime.Phut = Phut - T2.Phut;
    NewTime.Gio = Gio - T2.Gio;
    return NewTime;
}

CTimeSpan CTime::TruCTime(CTime &T2)
{
    CTimeSpan NewTime;
    if (Giay < T2.Giay)
    {
        Phut--;
        Giay += 60;
    }
    NewTime.Giay = Giay - T2.Giay;
    if (Phut < T2.Phut)
    {
        Gio--;
        Phut += 60;
    }
    NewTime.Phut = Phut - T2.Phut;
    if (Gio < T2.Gio)
    {
        NewTime.Ngay = -1;
        Gio += 24;
    }
    else
    {
        NewTime.Ngay = 0;
    }
    NewTime.Gio = Gio - T2.Gio;
    return NewTime;
}
