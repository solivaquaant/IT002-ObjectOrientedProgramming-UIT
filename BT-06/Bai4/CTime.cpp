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

istream &operator>>(istream &is, CTime &time)
{
    cout << "Nhap gio = ";
    is >> time.Gio;
    cout << "Nhap phut = ";
    is >> time.Phut;
    cout << "Nhap giay = ";
    is >> time.Giay;
    return is;
}

ostream &operator<<(ostream &os, CTime time)
{
    os << time.Gio << " gio, " << time.Phut << " phut, " << time.Giay << " giay.";
    return os;
}

CTime CTime::operator+(int sec)
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

CTime CTime::operator-(int sec)
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

CTime CTime::operator++()
{
    Giay++;
    if (Giay >= 60)
    {
        Giay = 0;
        Phut++;
        if (Phut >= 60)
        {
            Phut = 0;
            Gio++;
            if (Gio >= 24)
            {
                Gio = 0;
            }
        }
    }
    return *this;
}

CTime CTime::operator--()
{
    Giay--;
    if (Giay < 0)
    {
        Giay = 59;
        Phut--;
        if (Phut < 0)
        {
            Phut = 59;
            Gio--;
            if (Gio < 0)
            {
                Gio = 23;
            }
        }
    }
    return *this;
}

CTimeSpan CTime::operator-(const CTime time)
{
    int totalSeconds1 = this->Gio * 3600 + this->Phut * 60 + this->Giay;
    int totalSeconds2 = time.Gio * 3600 + time.Phut * 60 + time.Giay;
    int diff = totalSeconds1 - totalSeconds2;

    int days = diff / 86400;
    diff %= 86400;
    int hours = diff / 3600;
    diff %= 3600;
    int minutes = diff / 60;
    int seconds = diff % 60;
    return CTimeSpan(days, hours, minutes, seconds);
}
