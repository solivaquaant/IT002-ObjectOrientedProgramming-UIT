#include <iostream>
#include "ThuongGioi.h"
#include "HaGioi.h"
using namespace std;

void ThuongGioi::Nhap()
{
    do
    {
        TieuTheGioi::Nhap();
    } while (isThuongGioi() != true); // nếu không đúng điều kiện thì nhập lại

    cout << "Nhap so luong Ha Gioi ma Thuong Gioi quan ly: ";
    cin >> iSoLuongHaGioi;

    for (int i = 0; i < iSoLuongHaGioi; i++)
    {
        cout << "Ha Gioi " << i + 1 << endl;
        cout << "Nhap thong tin Ha gioi thu " << i + 1 << endl;
        DanhSachHaGioi[i] = new HaGioi;
        ((HaGioi *)DanhSachHaGioi[i])->Nhap();
    }
}

void ThuongGioi::Xuat()
{
    cout << "Ten: " << Ten << endl;
    TieuTheGioi::Xuat();
    cout << endl;
}
