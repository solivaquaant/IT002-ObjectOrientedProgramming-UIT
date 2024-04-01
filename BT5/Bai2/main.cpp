#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "ThongKeVanBan.h"

main()
{
    ThongKeVanBan VanBan1("myfile.txt");
    VanBan1.XuatKetQua("output.txt");
    return 0;
}