#pragma once
#include <iostream>
using namespace std;

class CTimeSpan
{
    friend class CTime;

private:
    int Ngay;
    int Gio, Phut, Giay;

public:
    CTimeSpan();
    CTimeSpan(int, int, int, int);
    ~CTimeSpan();

    int GetNgay();
    int GetGio();
    int GetPhut();
    int GetGiay();

    long GetTongGio();
    long GetTongPhut();
    long GetTongGiay();

    friend istream &operator>>(istream &is, CTimeSpan &);
    friend ostream &operator<<(ostream &os, CTimeSpan);

    CTimeSpan operator+(const CTimeSpan);
    CTimeSpan operator-(const CTimeSpan);

    bool operator==(CTimeSpan);
    bool operator!=(CTimeSpan);
    bool operator>(CTimeSpan);
    bool operator>=(CTimeSpan);
    bool operator<(CTimeSpan);
    bool operator<=(CTimeSpan);
};
