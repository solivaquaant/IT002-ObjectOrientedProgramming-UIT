#pragma once
#include <iostream>
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
    CTime(int h, int m, int s);
    ~CTime();

    int GetGio();
    int GetPhut();
    int GetGiay();
    long GetTongPhut();
    long GetTongGiay();

    friend istream &operator>>(istream &is, CTime &);
    friend ostream &operator<<(ostream &os, CTime);

    CTime operator+(int);
    CTime operator++();

    CTime operator-(int);
    CTime operator--();

    CTimeSpan  operator-(const CTime);
};