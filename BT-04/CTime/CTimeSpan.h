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

    void Nhap(), Xuat();
    int SumTime();

    int GetNgay();
    int GetGio();
    int GetPhut();
    int GetGiay();

    long GetTongGio();
    long GetTongPhut();
    long GetTongGiay();

    CTimeSpan Cong(CTimeSpan &T2);
    CTimeSpan Tru(CTimeSpan &T2);

    bool IsEqual(CTimeSpan &T);
    bool GreaterThan(CTimeSpan &T);
    bool GreaterEqualThan(CTimeSpan &T);
    bool LowerThan(CTimeSpan &T);
    bool LowerEqualThan(CTimeSpan &T);
};
