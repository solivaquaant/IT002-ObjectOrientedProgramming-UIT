#pragma once
#include<iostream>
#include "CTimeSpan.h"
using namespace std;

class CTime
{
    friend class CTimeSpan;
private:
    int Gio;
    int Phut;
    int Giay;
public:
    CTime();
    CTime(int h,int m,int s);
    ~CTime();

    int GetGio();
    int GetPhut();
    int GetGiay();
    long GetTongPhut();
    long GetTongGiay();

    void Nhap(), Xuat();

    CTime Cong(CTime & T2);
    CTime CongGiay(int sec);

    CTime Tru(CTime & T2);
    CTime TruGiay(int sec);

    CTime Cong1Giay();
    CTime Tru1Giay();

    CTimeSpan TruCTime(CTime & T2);
};