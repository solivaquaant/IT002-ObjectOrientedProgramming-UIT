#include <iostream>
#include <string>
using namespace std;
#pragma once
class Candidate
{
private:
    string ma, ten, ngaysinh;
    float diemToan, diemVan, diemAnh;

public:
    Candidate();
    ~Candidate();
    void nhap();
    float tongDiem();
    void xuat();
};