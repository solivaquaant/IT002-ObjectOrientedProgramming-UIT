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

    int MaxDay();


  friend istream &operator>>(istream &is, CDate &);
  friend ostream &operator<<(ostream &os, CDate);

  CDate operator+(int);
  CDate operator++();
  CDate operator-(int);
  CDate operator--();
  int operator-(CDate);
};