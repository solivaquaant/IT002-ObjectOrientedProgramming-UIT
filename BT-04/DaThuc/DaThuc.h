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
    ~DaThuc();
    DaThuc(int bac, double *heso);
    void Nhap(), Xuat();
    DaThuc Cong(const DaThuc &dt);
    DaThuc Tru(const DaThuc &dt);
    DaThuc Nhan(const DaThuc &dt);
    KetQuaChia Chia(const DaThuc &dt);
};

struct KetQuaChia
{
    DaThuc thuong;
    DaThuc du;
};