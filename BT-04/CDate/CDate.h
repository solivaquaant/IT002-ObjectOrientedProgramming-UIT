#include <iostream>
using namespace std;

class CDate
{
private:
  int Ngay, Thang, Nam;

public:
  CDate();
  ~CDate();
  CDate(int, int, int);
  void Nhap(), Xuat();
  int MaxDay();
  CDate CongNgay(int), TruNgay(int);
  CDate Cong1Ngay(), Tru1Ngay();
  int KhoangCach(CDate);
};