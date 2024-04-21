#include <iostream>
#include <string>
using namespace std;

class Heading
{
private:
    string companyName;
    string reportName;

public:
    Heading(const string &company = "ABC Industries", const string &report = "Report")
        : companyName(company), reportName(report) {}

    void printOneLine() const
    {
        cout << companyName << " " << reportName << endl;
    }

    void printBoxed() const
    {
        int width = companyName.length() > reportName.length() ? companyName.length() : reportName.length();
        int paddingCompany = (width + 4 - companyName.length()) / 2;
        int paddingReport = (width + 4 - reportName.length()) / 2;

        cout << string(width + 4, '*') << endl;
        cout << string(paddingCompany, ' ') << companyName << endl;
        cout << string(paddingReport, ' ') << reportName << endl;
        cout << string(width + 4, '*') << endl;
    }
};

int main()
{
    Heading heading1("Pet Pals", "Payroll Report");
    Heading heading2;

    cout << "One-line format:" << endl;
    heading1.printOneLine();
    heading2.printOneLine();
    cout << endl;

    cout << "Boxed format:" << endl;
    heading1.printBoxed();
    heading2.printBoxed();

    return 0;
}
