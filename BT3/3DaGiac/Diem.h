#ifndef DIEM_H
#define DIEM_H

class Diem
{
private:
    double HoanhDo;
    double TungDo;

public:
    Diem(double HoanhDo = 0, double TungDo = 0);
    void Set(double HoanhDo, double TungDo);
    double GetHoanhDo();
    double GetTungDo();
    void TinhTien(double x, double y);
    void Nhap();
    void Xuat();
};

#endif