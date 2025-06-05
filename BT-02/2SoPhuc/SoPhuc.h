#include <iostream>
using namespace std;

class sophuc
{
private:
    float thuc, ao;

public:
    sophuc() {}
    sophuc(float t, float a)
    {
        thuc = t;
        ao = a;
    }
    void nhap();
    void xuat();
    void cong(sophuc a);
    void tru(sophuc a);
    void nhan(sophuc a);
    void chia(sophuc a);
    ~sophuc(){};
};
