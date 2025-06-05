#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


class ThongKeVanBan
{
private:
    vector<string> sentences;
    vector<vector<string>> words;
    unordered_map<string, int> word_count;

public:
    ThongKeVanBan(const string &filename);
    void TachCau(const string &line); //tách câu dựa vào .!?
    void TachTu(); //tách từ dựa vào ' ' và dấu câu
    void SapXepTu();
    void XuatKetQua(const string &filename);
};
