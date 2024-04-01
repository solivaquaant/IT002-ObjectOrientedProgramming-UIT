#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "ThongKeVanBan.h"
using namespace std;

ThongKeVanBan::ThongKeVanBan(const string &filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Không thể mở file!" << filename << endl;
        return;
    }

    string line;
    while (getline(file, line))
    {
        TachCau(line);
    }
    file.close();

    TachTu();

    SapXepTu();
}

void ThongKeVanBan::TachCau(const string &line) // tách câu dựa vào .!?
{
    int start = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == '.' || line[i] == '!' || line[i] == '?')
        {
            sentences.push_back(line.substr(start, i - start + 1));
            start = i + 1;
        }
    }
}

void ThongKeVanBan::TachTu()
{
    for (const auto &sentence : sentences)
    {
        vector<string> sentence_words;
        int start = 0;
        for (int i = 0; i < sentence.size(); i++)
        {
            if ((sentence[i] == ' ') || (sentence[i] == '!') || (sentence[i] == '.') || (sentence[i] == '?'))
            {
                string word = sentence.substr(start, i - start);
                sentence_words.push_back(word);
                word_count[word]++;
                start = i + 1;
            }
        }
        words.push_back(sentence_words);
    }
}

void ThongKeVanBan::SapXepTu()
{
    for (auto &sentence_words : words)
    {
        sort(sentence_words.begin(), sentence_words.end());
    }
}

void ThongKeVanBan::XuatKetQua(const string &filename)
{
    ofstream file(filename);
    if (!file.is_open())
    {
        cerr << "Không thể mở file: " << filename << endl;
        return;
    }

    //
    file << "So luong cau trong Van Ban la : ";
    file << sentences.size() << "\n\n";

    //
    int i = 1;
    for (const auto &sentence_words : words)
    {
        file << "So luong tu trong cau thu " << i << " la: ";
        file << sentence_words.size() << '\n';
        i++;
    }
    file << "\n";

    //
    file << "Tu xuat hien nhieu nhat trong Van Ban la : ";
    int max_count = 0;
    for (const auto &[word, count] : word_count)
    {
        max_count = max(max_count, count);
    }
    for (const auto &[word, count] : word_count)
    {
        if (count == max_count)
        {
            file << word << ' ';
        }
    }
    file << "\n\n";

    //
    for (const auto &sentence_words : words)
    {
        for (const auto &word : sentence_words)
        {
            file << word << ' ';
        }
        file << '\n';
    }

    file.close();
}
