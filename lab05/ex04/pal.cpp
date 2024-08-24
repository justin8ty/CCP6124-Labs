#include <iostream>
#include <string>
using namespace std;

class Pstring : public string
{
public:
    Pstring(string s) : string(s) {}
    bool isPalindrome();
};

bool Pstring::isPalindrome()
{
    string strRev;
    for (int i = (*this).length() - 1; i >= 0; i--)
    {
        strRev += (*this)[i];
    }
    return strRev == (*this);
}

int main()
{
    string str;
    cout << "Enter a string to test: ";
    cin >> str;

    Pstring pstring(str);

    if (pstring.isPalindrome())
    {
        cout << str << " is palindrome"
             << "\n";
    }
    else
    {
        cout << str << " is not palindrome"
             << "\n";
    }
}
