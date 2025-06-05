#include <iostream>
using namespace std;

class PhanSo
{
private:
    int TuSo, MauSo;

public:
    PhanSo();
    PhanSo(int);
    PhanSo(int, int);
    ~PhanSo();

    void RutGon();
    int UCLN(int, int);

    PhanSo operator+(const PhanSo);
    PhanSo operator-(const PhanSo);
    PhanSo operator*(const PhanSo);
    PhanSo operator/(const PhanSo);

    bool operator==(PhanSo);
    bool operator!=(PhanSo);
    bool operator>(PhanSo);
    bool operator>=(PhanSo);
    bool operator<(PhanSo);
    bool operator<=(PhanSo);

    friend istream &operator>>(istream &is, PhanSo &);
    friend ostream &operator<<(ostream &os, const PhanSo &);
};