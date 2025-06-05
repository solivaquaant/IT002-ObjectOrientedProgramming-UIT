#include <iostream>
#include "PhanSo.h"
using namespace std;


main()
{
    PhanSo A;
    cout<<"Nhap Phan So A:"<<endl;
    A.Nhap();
    A.RutGon();
    cout<<"Phan So sau khi duoc rut gon = :";
    A.Xuat();
    
}