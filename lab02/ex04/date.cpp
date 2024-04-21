#include <iostream>
#include <string>

class Date
{
private:
    int month;
    int day;
    int year;

    bool isLeapYear(int year) const
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int getDaysInMonth(int month, int year) const
    {
        if (month == 2)
        {
            return isLeapYear(year) ? 29 : 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }

public:
    Date(int m = 1, int d = 1, int y = 2001) : month(m), day(d), year(y)
    {
        if (month < 1 || month > 12)
        {
            month = 1;
        }

        int maxDay = getDaysInMonth(month, year);
        if (day < 1 || day > maxDay)
        {
            day = 1;
        }
    }

    void printDate1() const
    {
        std::cout << month << "/" << day << "/" << (year % 100) << std::endl;
    }

    void printDate2() const
    {
        static const std::string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        std::cout << months[month - 1] << " " << day << ", " << year << std::endl;
    }

    void printDate3() const
    {
        static const std::string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        std::cout << day << " " << months[month - 1] << " " << year << std::endl;
    }
};

int main()
{
    Date date1(3, 15, 16);
    Date date2(3, 15, 2016);

    date1.printDate1();
    date1.printDate2();
    date1.printDate3();

    date2.printDate1();
    date2.printDate2();
    date2.printDate3();

    return 0;
}
