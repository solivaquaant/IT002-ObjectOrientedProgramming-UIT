#include <iostream>
#include "CDate.h"
using namespace std;

main()
{
    CDate date1, date2;

    cout << "Nhap date1 : " << endl;
    date1.Nhap();
    cout << endl;

    cout << "Ngay vua nhap la : " << endl;
    date1.Xuat();
    cout << endl;

    cout << "Nhap date2 : " << endl;
    date2.Nhap();
    cout << "Ngay vua nhap la : " << endl;
    date2.Xuat();

    int SoNgay;
    cout << "Nhap So ngay = ";
    cin >> SoNgay;
    cout << "Ngay sau khi cong them " << SoNgay << " ngay la : ";
    date1.CongNgay(SoNgay).Xuat();
    cout << "Ngay sau khi tru di " << SoNgay << " ngay la : ";
    date1.TruNgay(SoNgay).Xuat();

    cout << "Date 1 sau khi cong them 1 ngay : " << endl;
    date1.Cong1Ngay().Xuat();

    cout << "Date 1 sau khi tru di 1 ngay : " << endl;
    date1.Tru1Ngay().Xuat();

    cout << "Khoang cach giua hai ngay la : " << date1.KhoangCach(date2);
}