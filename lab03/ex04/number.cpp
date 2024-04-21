#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int number;
    static string lessThan20[];
    static string tens[];
    static string hundred;
    static string thousand;

    void printHelper(int n);

public:
    Numbers(int num)
    {
        number = num;
    }

    void print();
};

string Numbers::lessThan20[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                                "seventeen", "eighteen", "nineteen"};

string Numbers::tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

void Numbers::printHelper(int n)
{
    if (n >= 1000)
    {
        printHelper(n / 1000);
        cout << " " << thousand;
        n %= 1000;
        if (n != 0)
            cout << " ";
    }

    if (n >= 100)
    {
        cout << lessThan20[n / 100] << " " << hundred;
        n %= 100;
        if (n != 0)
            cout << " ";
    }

    if (n >= 20)
    {
        cout << tens[n / 10];
        if (n % 10 != 0)
        {
            cout << " " << lessThan20[n % 10];
        }
    }
    else if (n > 0)
    {
        cout << lessThan20[n];
    }
}

void Numbers::print()
{
    if (number == 0)
    {
        cout << lessThan20[number];
    }
    else
    {
        printHelper(number);
    }
}

int main()
{
    int num;
    cout << "Enter a number between 0 and 9999: ";
    cin >> num;
    if (num < 0 || num > 9999)
    {
        cout << "Invalid input. Please enter a number between 0 and 9999." << endl;
        return 1;
    }

    Numbers n(num);
    cout << "English description of #: ";
    n.print();
    cout << endl;

    return 0;
}
