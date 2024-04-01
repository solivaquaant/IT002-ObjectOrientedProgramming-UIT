#include <iostream>
using namespace std;

class MyString
{
private:
    char *str;
    int length;

public:
    MyString();
    MyString(const char *s);
    ~MyString();
    int getLength();
    MyString operator+(const MyString &s);
    MyString Reverse();

    friend istream& operator>>(istream &is, MyString &s);
    friend ostream& operator<<(ostream &os, const MyString &s);
};