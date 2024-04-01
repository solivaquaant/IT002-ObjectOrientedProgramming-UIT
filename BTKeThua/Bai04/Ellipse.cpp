#include <iostream>
#include "Ellipse.h"
using namespace std;

Ellipse::Ellipse()
{
    x = y = a = b = 0;
}

Ellipse::Ellipse(float X, float Y, float A, float B)
{
    x = X;
    y = Y;
    a = A;
    b = B;
}

void Ellipse::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> x;
    cout << "Nhap tung do: ";
    cin >> y;
}
void Ellipse::Xuat()
{
    cout << "Toa do tam: (" << x << " , " << y << ") " << endl;
}