#include <iostream>
#include <string>
using namespace std;

class EncryptableString : public string
{
public:
    EncryptableString(const string &str) : string(str) {}

    void encrypt()
    {
        for (char &c : *this)
        {
            if (isalpha(c))
            {
                if (c == 'z')
                    c = 'a';
                else if (c == 'Z')
                    c = 'A';
                else
                    c++;
            }
        }
    }
};

int main()
{
    string input;
    cout << "Enter a string to encrypt: ";
    getline(cin, input);

    EncryptableString encryptedString(input);
    encryptedString.encrypt();

    cout << "Encrypted string: " << encryptedString << endl;

    return 0;
}
