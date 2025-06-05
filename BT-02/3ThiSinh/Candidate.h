#pragma once
#include <iostream>
using namespace std;
class Candidate
{
private:
    string ma, ten;
    int ngay, thang, nam;
    float diemToan, diemVan, diemAnh;

public:
    void nhap();
    void xuat();
    float tongDiem();
};