#include <iostream>
using namespace std;

class Diem
{
private:
    double HoanhDo, TungDo;

public:
    Diem();
    ~Diem();
    Diem(double x, double y);
    void Set(double x, double y);
    void Nhap(), Xuat();
    double XuatHoanhDo(), XuatTungDo();
    Diem TinhTien(Diem vector);
};