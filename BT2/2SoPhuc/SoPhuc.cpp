#include <iostream>
#include "SoPhuc.h"
using namespace std;
void sophuc::nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}

void sophuc::xuat()
{
    cout << "(" << thuc << " ";
    if (ao >= 0)
        cout << "+ " << ao << "i)";
    else
        cout << ao << "i)";
}

void sophuc::cong(sophuc a) // cong 2 so phuc
{
    thuc += a.thuc;
    ao += a.ao;
}

void sophuc::tru(sophuc a) // tru 2 so phuc
{
    thuc -= a.thuc;
    ao -= a.ao;
}
void sophuc::nhan(sophuc a) // tru 2 so phuc
{
    sophuc z;
    z.thuc = thuc * a.thuc - ao * a.ao;
    z.ao = thuc * a.ao + ao * a.thuc;
    *this = z;
}

void sophuc::chia(sophuc a) // tru 2 so phuc
{
    sophuc z;
    z.thuc = (thuc * a.thuc + ao * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
    z.ao = (ao * a.thuc - thuc * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
    *this = z;
}
