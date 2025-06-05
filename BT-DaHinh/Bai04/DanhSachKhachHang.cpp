#include <iostream>
#include <fstream>
#include "DanhSachKhachHang.h"
#include "KhachHang.h"
#include "KhachA.h"
#include "KhachB.h"
#include "KhachC.h"
using namespace std;

void DanhSachKhachHang::readData(string fileName)
{
    ifstream inp(fileName);

    int x, y, z;
    inp >> x >> y >> z;

    for (int i = 0; i < x; i++)
    {
        string ten;
        int soLuong, donGia;
        inp >> ten >> soLuong >> donGia;
        list[size++] = new KhachA(ten, soLuong, donGia);
    }

    for (int i = 0; i < y; i++)
    {
        string ten;
        int soLuong, donGia, years;
        inp >> ten >> soLuong >> donGia >> years;
        list[size++] = new KhachB(ten, soLuong, donGia, years);
    }

    for (int i = 0; i < z; i++)
    {
        string ten;
        int soLuong, donGia;
        inp >> ten >> soLuong >> donGia;
        list[size++] = new KhachC(ten, soLuong, donGia);
    }

    inp.close();
}

void DanhSachKhachHang::writeData(string fileName)
{
    ofstream out(fileName);

    double tong = 0;

    for (int i = 0; i < size; i++)
    {
        out << list[i]->Ten << " " << list[i]->Tien << endl;
        tong += list[i]->Tien;
    }

    out << "Tổng: " << tong << endl;

    out.close();
}
