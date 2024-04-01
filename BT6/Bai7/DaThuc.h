#include <iostream>
using namespace std;
struct KetQuaChia;

class DaThuc
{
private:
    int Bac;
    double *HeSo;

public:
    DaThuc(const DaThuc &dt);
    DaThuc();
    DaThuc(int);
    DaThuc(int bac, double *heso);
    ~DaThuc();

    friend istream &operator>>(istream &is, DaThuc &);
    friend ostream &operator<<(ostream &os, DaThuc);

    DaThuc operator+(DaThuc);
    DaThuc operator-(DaThuc);
    DaThuc operator*(DaThuc);
    KetQuaChia operator/(DaThuc);
};

struct KetQuaChia
{
    DaThuc thuong;
    DaThuc du;
};
