#include <iostream>
#include "NgheSi.h"
using namespace std;

void NgheSi::Nhap()
{
    Nguoi::Nhap();
    cout << "Nhap ten cong ty quan li: ";
    getline(cin, CongTy);
    fflush(stdin);
    cout << "Nhap nam ra mat: ";
    cin >> NamDebut;
}

void NgheSi::Xuat()
{
    Nguoi::Xuat();
    cout << "Cong ty quan ly: " << CongTy << endl;
    cout << "Nam ra mat: " << NamDebut << endl;
}