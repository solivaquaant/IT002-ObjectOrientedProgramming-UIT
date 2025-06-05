#include <iostream>
#include "Nguoi.h"
using namespace std;

class NgheSi : public Nguoi
{
private:
    string CongTy;
    int NamDebut;

public:
    // NgheSi();
    // ~NgheSi();
    void Nhap(), Xuat();
};