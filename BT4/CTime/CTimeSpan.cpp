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

void CTimeSpan::Nhap()
{
    cout << "Nhap ngay = ";
    cin >> Ngay;
    cout << "Nhap gio = ";
    cin >> Gio;
    cout << "Nhap phut = ";
    cin >> Phut;
    cout << "Nhap giay = ";
    cin >> Giay;
}

void CTimeSpan::Xuat()
{
    cout << Ngay << " ngay, " << Gio << " gio, " << Phut << " phut, " << Giay << " giay. " << endl;
}

CTimeSpan CTimeSpan::Cong(CTimeSpan &T2)
{
    CTimeSpan NewTime;
    NewTime.Ngay = (GetTongGio() + T2.GetTongGio()) / 24;
    NewTime.Gio = (GetTongGio() + T2.GetTongGio()) % 24;
    NewTime.Phut = (GetTongPhut() + T2.GetTongPhut()) % 60;
    NewTime.Giay = (GetTongGiay() + T2.GetTongGiay()) % 60;
    return NewTime;
}

CTimeSpan CTimeSpan::Tru(CTimeSpan &T2)
{
    CTimeSpan NewTime;
    NewTime.Ngay = (GetTongGio() - T2.GetTongGio()) / 24;
    NewTime.Gio = (GetTongGio() - T2.GetTongGio()) % 24;
    NewTime.Phut = (GetTongPhut() - T2.GetTongPhut()) % 60;
    NewTime.Giay = (GetTongGiay() - T2.GetTongGiay()) % 60;
    return NewTime;
}

bool CTimeSpan::IsEqual(CTimeSpan &T)
{
    return (this->GetTongGiay() == T.GetTongGiay());
}
bool CTimeSpan::GreaterThan(CTimeSpan &T)
{
    return (this->GetTongGiay() > T.GetTongGiay());
}
bool CTimeSpan::GreaterEqualThan(CTimeSpan &T)
{
    return (this->GetTongGiay() >= T.GetTongGiay());
}
bool CTimeSpan::LowerThan(CTimeSpan &T)
{
    return (this->GetTongGiay() < T.GetTongGiay());
}
bool CTimeSpan::LowerEqualThan(CTimeSpan &T)
{
    return (this->GetTongGiay() <= T.GetTongGiay());
}