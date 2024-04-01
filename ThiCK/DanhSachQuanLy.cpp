#include <iostream>
#include "TieuTheGioi.h"
#include "DanhSachQuanLy.h"
#include "ThuongGioi.h"
#include "HaGioi.h"

using namespace std;

void DanhSachQuanLy::Nhap()
{
    cout << "Nhap so luong gioi: ";
    cin >> iSoLuong;
    for (int i = 0; i < iSoLuong; i++)
    {
        cout << "STT: " << i + 1 << endl;
        cout << "Thuong Gioi (1) - Ha Gioi (2)" << endl;
        cin >> Loai[i];
        if (Loai[i] == 1)
        {
            DanhSach[i] = new ThuongGioi;
            ((ThuongGioi *)DanhSach[i])->Nhap();
            // if (((ThuongGioi *)DanhSach[i])->isThuongGioi() == false)
            // {
            //     delete DanhSach[i];
            //     i--;
            // }
        }
        if (Loai[i] == 2)
        {
            DanhSach[i] = new HaGioi;
            ((HaGioi *)DanhSach[i])->Nhap();
            // if ((HaGioi *)DanhSach[i]->DuDieuKienThuongGioi() == true)  //nếu Hạ Giới đủ điều kiện làm Thương Giới thì chuyển thanh Thuowjgn Giới
            //     DanhSach[i] = new ThuongGioi;
        }
    }
}

void DanhSachQuanLy::Xuat()
{

    for (int i = 0; i < iSoLuong; i++)
    {
        if (Loai[i] == 1)
        {
            ((ThuongGioi *)DanhSach[i])->Xuat();
        }
        if (Loai[i] == 2)
        {
            ((HaGioi *)DanhSach[i])->Xuat();
        }
    }
}

void DanhSachQuanLy::TiemLucMax()
{
    // chỉ số sức mạnh càng cao, tiềm lực càng cao
    int TiemLucMaxHaGioi = 0, posHaGioi = -1;
    int TiemLucMaxThuongGioi = 0, posThuongGioi = -1;
    for (int i = 0; i < iSoLuong; i++)
    {

        if (Loai[i] == 1)
        {
            if (DanhSach[i]->getChiSoSucManh() > TiemLucMaxThuongGioi)
            {
                TiemLucMaxThuongGioi = DanhSach[i]->getChiSoSucManh();
                posThuongGioi = i;
            }
        }
        if (Loai[i] == 2)
        {
            if (DanhSach[i]->getChiSoSucManh() > TiemLucMaxHaGioi)
            {
                TiemLucMaxHaGioi = DanhSach[i]->getChiSoSucManh();
                posHaGioi = i;
            }
        }
    }
    cout << "Thuong Gioi co tiem luc lon nhat: ";
    DanhSach[posThuongGioi]->Xuat();
    cout << "Ha Gioi co tiem luc lon nhat: ";
    DanhSach[posHaGioi]->Xuat();
}

void DanhSachQuanLy::ThuongGioiCoNhieuHaGioiNhat()
{
    int Max = 0;
    int pos = -1;
    for (int i = 0; i < iSoLuong; i++)
    {
        if (DanhSach[i]->getLoai() == 1)
        {
            if (DanhSach[i]->getChiSoSucManh() > Max)
            {
                Max = DanhSach[i]->getChiSoSucManh();
                pos = i;
            }
        }
    }
    cout << "Thuong gioi co nhieu Ha gioi nhat la: " << endl;
    DanhSach[pos]->Xuat();
}
