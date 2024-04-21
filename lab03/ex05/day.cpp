#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
    int day;
    static string months[];
    static int daysInMonth[];

public:
    DayOfYear(int d)
    {
        day = d;
    }

    void print();
};

string DayOfYear::months[] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};

int DayOfYear::daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void DayOfYear::print()
{
    int totalDays = day;
    int month = 0;
    while (totalDays > daysInMonth[month])
    {
        totalDays -= daysInMonth[month];
        month++;
    }
    cout << months[month] << " " << totalDays << endl;
}

int main()
{
    int day;
    cout << "Enter a day of the year (1-365): ";
    cin >> day;

    if (day < 1 || day > 365)
    {
        cout << "Invalid input. Please enter a day between 1 and 365." << endl;
        return 1;
    }

    DayOfYear date(day);
    cout << "The date is: ";
    date.print();

    return 0;
}
