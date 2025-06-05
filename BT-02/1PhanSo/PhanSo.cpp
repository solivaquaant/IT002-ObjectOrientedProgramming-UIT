#include <iostream>
#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap()
{
    cout<<"Nhap tu so = "; cin>>tuso;
    cout<<"Nhap mau so = "; cin>>mauso;
}

PhanSo PhanSo::Tong(PhanSo B){
    PhanSo kq;
    kq.tuso = tuso*B.mauso+mauso*B.tuso;
    kq.mauso = mauso*B.mauso;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo B){
    PhanSo kq;
    kq.tuso = tuso*B.mauso-mauso*B.tuso;
    kq.mauso = mauso*B.mauso;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo B)
{
    PhanSo kq;
    kq.tuso=tuso*B.tuso;
    kq.mauso=mauso*B.mauso;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(PhanSo B)
{
    PhanSo kq;
    kq.tuso=tuso*B.mauso;
    kq.mauso=mauso*B.tuso;
    kq.RutGon();
    return kq;
}

int UCLN(int a,int b){
    if (a%b==0)
        return b;
    else
        return UCLN(b,a%b);
}

void PhanSo::RutGon()
{
    if (mauso==0) return;
    int dau_tu, dau_mau;
    if (tuso>=0) dau_tu=1; else dau_tu=-1;
    if (mauso>=0) dau_mau=1; else dau_mau=-1;
    tuso=abs(tuso); mauso=abs(mauso);

    int g=UCLN(tuso,mauso);
    tuso=tuso/g;
    mauso=mauso/g;

    tuso=tuso*dau_tu*dau_mau;
}

void PhanSo::Xuat()
{
     if (tuso==mauso) cout<<"1";
     else if (mauso==1) cout<<tuso;
     else
     cout<<tuso<<"/"<<mauso;
}
