#pragma once
#include <iostream>
#include "Ellipse.h"
using namespace std;

class Circle : public Ellipse
{
private:
public:
    Circle();
    Circle(double x, double y, double r) : Ellipse(x, y, r, r) {}

    void Nhap();
    void Xuat();
};