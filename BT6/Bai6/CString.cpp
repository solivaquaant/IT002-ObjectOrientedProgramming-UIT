#include <iostream>
#include "CString.h"
using namespace std;

CString::CString()
{
    str = nullptr;
    length = 0;
}

CString::CString(const char *s)
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

CString::~CString()
{
    delete[] str;
}

int CString::getLength()
{
    return length;
}

CString CString::operator+(CString s)
{
    CString result;
    result.length = length + s.length;
    result.str = new char[result.length + 1];

    for (int i = 0; i < length; i++)
        result.str[i] = str[i];

    for (int i = 0; i < s.length; i++)
        result.str[length + i] = s.str[i];
    result.str[result.length] = '\0';
    return result;
}

CString CString::operator=(CString s)
{
    if (this != &s)
    {
        delete[] str;
        length = s.length;
        str = new char[length + 1];
        for (int i = 0; i < length; i++)
            str[i] = s.str[i];
        str[length] = '\0';
    }
    return *this;
}

int myStrcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

bool CString::operator==(CString s)
{
    return myStrcmp(str, s.str) == 0;
}

bool CString::operator>=(CString s)
{
    return (this->length >= s.length);
}

bool CString::operator>(CString s)
{
    return (this->length > s.length);
}
bool CString::operator<=(CString s)
{
    return (this->length <= s.length);
}
bool CString::operator<(CString s)
{
    return (this->length < s.length);
}

istream &operator>>(istream &is, CString &s)
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

ostream &operator<<(ostream &os, const CString &s)
{
    os << s.str;
    return os;
}
