#include <iostream>
#include "DanhSachQuanLy.h"
using namespace std;

main()
{
    DanhSachQuanLy dsql;
    dsql.Nhap();                  // câu a
    dsql.Xuat();                  // câu b
    dsql.NVLuongThapHonLuongTB(); // câu c
    dsql.NVLuongMax();            // câu d
    dsql.NVLuongMin();            // câu e
    dsql.LTVLuongMax();           // câu f
    dsql.KCVLuongMin();           // câu g
}