#include <iostream>
#include "CTimeSpan.h"
using namespace std;

CTimeSpan::CTimeSpan()
{
    this->Ngay = this->Gio = this->Phut = this->Giay = 0;
}

CTimeSpan::CTimeSpan(int d, int h, int m, int s)
{
    this->Ngay = d;
    this->Gio = h;
    this->Phut = m;
    this->Giay = s;
}

CTimeSpan::~CTimeSpan()
{
}

int CTimeSpan::GetNgay()
{
    return this->Ngay;
}

int CTimeSpan::GetGio()
{
    return this->Gio;
}

int CTimeSpan::GetPhut()
{
    return this->Phut;
}

int CTimeSpan::GetGiay()
{
    return this->Giay;
}

long CTimeSpan::GetTongGio()
{
    return this->Gio + this->Ngay * 24;
}

long CTimeSpan::GetTongPhut()
{
    return this->Phut + this->Gio * 60 + this->Ngay * 24 * 60;
}

long CTimeSpan::GetTongGiay()
{
    return this->Giay + this->Phut * 60 + this->Gio * 60 * 60 + this->Ngay * 24 * 60 * 60;
}

istream &operator>>(istream &is, CTimeSpan &time)
{
    cout << "Nhap ngay = ";
    is >> time.Ngay;
    cout << "Nhap gio = ";
    is >> time.Gio;
    cout << "Nhap phut = ";
    is >> time.Phut;
    cout << "Nhap giay = ";
    is >> time.Giay;
    return is;
}

ostream &operator<<(ostream &os, CTimeSpan time)
{
    os << time.Ngay << " ngay, " << time.Gio << " gio, " << time.Phut << " phut, " << time.Giay << " giay. " << endl;
    return os;
}

CTimeSpan CTimeSpan::operator+(const CTimeSpan time)
{
    CTimeSpan NewTime;
    NewTime.Giay = (Giay + time.Giay) % 60;
    int carry = (Giay + time.Giay) / 60;
    NewTime.Phut = (Phut + time.Phut + carry) % 60;
    carry = (Phut + time.Phut + carry) / 60;
    NewTime.Gio = (Gio + time.Gio + carry) % 24;
    carry = (Gio + time.Gio + carry) / 24;
    NewTime.Ngay = Ngay + time.Ngay + carry;
    return NewTime;
}

CTimeSpan CTimeSpan::operator-(const CTimeSpan time)
{
    CTimeSpan NewTime;
    if (Giay < time.Giay)
    {
        Phut--;
        Giay += 60;
    }
    NewTime.Giay = Giay - time.Giay;
    if (Phut < time.Phut)
    {
        Gio--;
        Phut += 60;
    }
    NewTime.Phut = Phut - time.Phut;
    if (Gio < time.Gio)
    {
        Ngay--;
        Gio += 24;
    }
    NewTime.Gio = Gio - time.Gio;
    NewTime.Ngay = Ngay - time.Ngay;
    return NewTime;
}

bool CTimeSpan::operator==(CTimeSpan time)
{
    return (this->GetTongGiay() == time.GetTongGiay());
}

bool CTimeSpan::operator!=(CTimeSpan time)
{
    return (this->GetTongGiay() != time.GetTongGiay());
}

bool CTimeSpan::operator>(CTimeSpan time)
{
    return (this->GetTongGiay() > time.GetTongGiay());
}

bool CTimeSpan::operator>=(CTimeSpan time)
{
    return (this->GetTongGiay() >= time.GetTongGiay());
}

bool CTimeSpan::operator<(CTimeSpan time)
{
    return (this->GetTongGiay() < time.GetTongGiay());
}

bool CTimeSpan::operator<=(CTimeSpan time)
{
    return (this->GetTongGiay() <= time.GetTongGiay());
}
