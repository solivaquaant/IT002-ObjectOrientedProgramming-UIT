#pragma once
#include <iostream>
using namespace std;

class Ellipse
{
protected:
    float x, y;
    float a, b;

public:
    Ellipse();
    Ellipse(float, float, float, float);

    void Nhap();
    void Xuat();
};