#include <iostream>
using namespace std;

bool NamNhuan(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        ;
    return true;
    return false;
}
int daysInMonth_max(int month, int year)
{
    int daysInMonth;
    if (month == 2)
    {
        if (NamNhuan(year) == true)
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        daysInMonth = 30;
    else
        daysInMonth = 31;

    return daysInMonth;
}

void NgayKeTiep(int &day, int &month, int &year)
{
    day++;
    if (day > daysInMonth_max(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

main()
{
    int day, month, year;
    do
    {
        cout << "Nhap ngay: ";
        cin >> day;
        cout << "Nhap thang: ";
        cin >> month;
        cout << "Nhap nam: ";
        cin >> year;
    } while (year < 0 || month < 1 || month > 12 || day < 0 || day > 31);
    NgayKeTiep(day, month, year);
    cout << "Ngay ke tiep la: " << endl;
    cout << day << " / " << month << " / " << year;
}
