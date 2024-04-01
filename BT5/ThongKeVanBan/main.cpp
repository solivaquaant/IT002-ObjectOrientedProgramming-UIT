#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ThongKeVanBan.h"
#include <map>
#include <algorithm>
using namespace std;

main()
{
    ThongKeVanBan DoanVan("gone.txt");
    DoanVan.DocFile();
    cout << "So luong cau trong van ban la: ";
    cout << DoanVan.DemSoCau();

    ofstream file("DemTuMoiCau.txt");
    DoanVan.DemTuMoiCau(file);
    file.close();
}