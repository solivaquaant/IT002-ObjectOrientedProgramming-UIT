#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class ThongKeVanBan
{
private:
    string VanBan;
    vector<string> DoanVan;
    int SoLuongCau;

public:
    ThongKeVanBan();
    ThongKeVanBan(string);
    ~ThongKeVanBan();

    void DocFile();
    int DemSoCau();
    int DemSoTuTrongDoan(string);

    //void DemTuTrongDoan(string word);
    void DemTuMoiCau(ofstream &file);
    void TuXuatHienMax(ofstream &file);
    void SapXep();
};