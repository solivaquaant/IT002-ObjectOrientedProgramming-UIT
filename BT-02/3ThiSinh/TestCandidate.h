#pragma once
#include <iostream>
#include "Candidate.h"
using namespace std;
class TestCandidate
{
private:
    int n;
    Candidate DanhSach[100];

public:
    void nhap();
    void xuat();
};