#include <iostream>
#include "DanhSachQuanLy.h"
#include "SinhVien.h"
#include "CaoDang.h"
#include "DaiHoc.h"
using namespace std;

main()
{
    DanhSachQuanLy dsSinhVien;

    dsSinhVien.Nhap(); // câu a
    dsSinhVien.Xuat(); // câu b

    cout << "Danh sach sinh vien du dieu kien tot nghiep: " << endl;
    dsSinhVien.isTotNghiep(); // câu c

    cout << "Danh sach sinh vien khong du dieu kien tot nghiep: " << endl;
    dsSinhVien.isNotTotNghiep(); // câu d

    cout << "Sinh vien Dai Hoc co diem trung binh cao nhat: " << endl;
    dsSinhVien.SVDaiHocDTBMax(); // câu e

    cout << "Sinh vien Cao Dang co diem trung binh cao nhat: " << endl;
    dsSinhVien.SVCaoDangDTBMax(); // câu f

    dsSinhVien.SoLuongSvKhongTotNghiep(); // câu g
}