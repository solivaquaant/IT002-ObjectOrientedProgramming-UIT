#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ThongKeVanBan.h"
#include <map>
#include <algorithm>
using namespace std;

ThongKeVanBan::ThongKeVanBan()
{
    this->VanBan = "";
    this->SoLuongCau = 0;
}

ThongKeVanBan::ThongKeVanBan(string file)
{
    this->SoLuongCau = 0;
    this->VanBan = file;
    ifstream InputFile(file);
    if (InputFile.is_open())
    {
        string line;
        while (getline(InputFile, line)) // nếu file mở thành công thì đọc từng dòng trong file lưu vào vector DoanVan
        {
            this->DoanVan.resize(SoLuongCau + 1);
            this->DoanVan[this->SoLuongCau] = line;
            this->SoLuongCau++;
        }
    }
    InputFile.close();
}

ThongKeVanBan::~ThongKeVanBan()
{
}

void ThongKeVanBan::DocFile()
{
    for (int i = 0; i < this->SoLuongCau; i++)
        cout << this->DoanVan[i] << endl;
}

int ThongKeVanBan::DemSoCau()
{
    int dem = 0;
    for (int i = 0; i < this->SoLuongCau; i++)
    {
        for (int j = 0; j < this->DoanVan[i].length(); j++)
            if ((this->DoanVan[i][j] == '.') || (this->DoanVan[i][j] == '!') || (this->DoanVan[i][j] == '?'))
                dem++;
    }
    return dem;
}

int ThongKeVanBan::DemSoTuTrongDoan(string word)
{
    int dem = 0;
    for (int i = 0; i < this->SoLuongCau; i++)
    {
        string str = this->DoanVan[i];
        while (str.find(word) != string ::npos)
        {
            if ((str[str.find(word) + word.length()] == ' ') || (str[str.find(word) + word.length()] == '.') || (str[str.find(word) + word.length()] == '!') || (str[str.find(word) + word.length()] == '?'))
            {
                dem++;
                if ((str.find(word) != 0) && (str[str.find(word) - 1] != ' '))
                    dem--;
            }
            str.replace(str.find(word), word.length(), "");
        }
    }
    return dem;
}

void ThongKeVanBan::DemTuMoiCau(ofstream &file)
{
    int SoCau = 0;
    for (int i = 0; i < this->SoLuongCau; i++)
    {
        int dem = 0;
        for (int j = 0; j < this->DoanVan[i].length(); j++)
        {
            if (this->DoanVan[i][j] == ' ')
                dem++;
            else if ((this->DoanVan[i][j] == '.') || (this->DoanVan[i][j] == '!') || (this->DoanVan[i][j] == '?'))
            {
                dem++;
                SoCau++;
                file << "Cau thu " << SoCau << " co " << dem << " tu." << endl;
                dem = 0;
                j++;
            }
        }
    }
}

void ThongKeVanBan::TuXuatHienMax(ofstream &file)
{
    map<string, int> TuMax;
    for (int i = 0; i < this->SoLuongCau; i++)
    {
        string str = this->DoanVan[i];
        for (int j = 0; j < str.length(); j++)
        {
            string tu = "";
            while ((j < str.length() - 1) && (str.[j] != ' '))
                tu += str[j];
            j++;
        }
        if (tu[tu.length() - 1] == '.')
    }
}
