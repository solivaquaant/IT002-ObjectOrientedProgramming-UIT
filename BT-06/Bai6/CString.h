#include <iostream>
using namespace std;

class CString
{
private:
    char *str;
    int length;

public:
    CString();
    CString(const char *s);
    ~CString();

    int getLength();
    CString operator+(CString);
    CString operator=(CString);

    bool operator==(CString);

    bool operator>=(CString);
    bool operator>(CString);
    bool operator<=(CString);
    bool operator<(CString);

    friend istream &operator>>(istream &is, CString &s);
    friend ostream &operator<<(ostream &os, const CString &s);
};