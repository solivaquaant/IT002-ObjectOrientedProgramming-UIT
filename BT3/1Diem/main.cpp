#include <iostream>
#include "Diem.h"
using namespace std;

main()
{
    Diem Diem1, Diem2(2.3, 4.3);
    Diem vector1;

    cout << "Nhap toa do diem : " << endl;
    Diem1.Nhap();
    cout << endl;
    cout << "Toa do diem vua nhap : " << endl;
    Diem1.Xuat();
    
    cout << "Nhap vector tinh tien : " << endl;
    vector1.Nhap();
    cout << "Toa do diem sau khi tinh tien : ";
    Diem1.TinhTien(vector1).Xuat();
}
