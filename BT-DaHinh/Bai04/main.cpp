#include "DanhSachKhachHang.h"

int main()
{
    DanhSachKhachHang ds;
    ds.readData("XYZ.INP");
    ds.writeData("XYZ.OUT");

    return 0;
}