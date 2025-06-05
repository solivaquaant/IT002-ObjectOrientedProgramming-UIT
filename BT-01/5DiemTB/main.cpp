#include <iostream>
using namespace std;

int main()
{
    string hoten;
    float diemtoan, diemvan, diemtb;

    cout << "Nhap ho ten hoc sinh: ";
    getline(cin, hoten);

    cout << "Nhap diem toan: ";
    cin >> diemtoan;

    cout << "Nhap diem van: ";
    cin >> diemvan;

    diemtb = (diemtoan + diemvan) / 2;

    cout << "Diem trung binh cua hoc sinh " << hoten << " la: " << diemtb << endl;
    return 0;
}