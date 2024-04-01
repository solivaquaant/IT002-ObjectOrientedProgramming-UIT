#include <iostream>
#include "Circle.h"
#include "Ellipse.h"
using namespace std;

Circle::Circle()
{
    x = y = a = b = 0;
}

void Circle::Nhap()
{
    Ellipse::Nhap();
    cout << "Nhap ban kinh: ";
    cin >> a;
}

void Circle::Xuat()
{
    Ellipse::Xuat();
    cout << "Ban kinh: " << a;
}