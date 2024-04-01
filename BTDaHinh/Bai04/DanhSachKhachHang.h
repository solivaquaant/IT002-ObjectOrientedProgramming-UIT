#pragma once
#include <iostream>
#include <fstream>
#include "KhachHang.h"
#define MAX_SIZE 3000
using namespace std;

class DanhSachKhachHang
{
private:
    KhachHang *list[MAX_SIZE];
    int size;

public:
    DanhSachKhachHang()
    {
        size = 0;
    }

    ~DanhSachKhachHang()
    {
        for (int i = 0; i < size; i++)
        {
            delete list[i];
        }
    }

    void readData(string fileName);

    void writeData(string fileName);
};
