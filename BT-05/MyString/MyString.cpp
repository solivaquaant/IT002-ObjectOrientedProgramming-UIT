#include <iostream>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
    str = nullptr;
    length = 0;
}

MyString::MyString(const char *s)
{
    length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    str = new char[length + 1];
    for (int i = 0; i < length; i++)
        str[i] = s[i];
    str[length] = '\0';
}

MyString::~MyString()
{
    delete[] str;
}

int MyString::getLength()
{
    return length;
}

MyString MyString::operator+(const MyString &s)
{
    MyString result;
    result.length = length + s.length;
    result.str = new char[result.length + 1];

    for (int i = 0; i < length; i++)
        result.str[i] = str[i];

    for (int i = 0; i < s.length; i++)
        result.str[length + i] = s.str[i];
    result.str[result.length] = '\0';
    return result;
}

MyString MyString::Reverse()
{
    MyString result;
    result.length = length;
    result.str = new char[length + 1];

    for (int i = 0; i < length; i++)
        result.str[i] = str[length - 1 - i];
    result.str[length] = '\0';
    return result;
}

istream &operator>>(istream &is, MyString &s)
{
    string InputStr;
    getline(is, InputStr);
    s.length = InputStr.length();
    s.str = new char[s.length + 1];
    for (int i = 0; i < s.length; i++)
        s.str[i] = InputStr[i];
    s.str[s.length] = '\0';
    return is;
}

ostream &operator<<(ostream &os, const MyString &s)
{
    os << s.str;
    return os;
}
