#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Base
{
public:
    Base() { cout << "Entering the base.\n"; }
    Base(string str)
    {
        cout << "This base is " << str << ".\n";
    }
    virtual ~Base() { cout << "Leaving the base.\n"; }
};
class Camp : public Base
{
public:
    Camp() { cout << "Entering the camp.\n"; }
    Camp(string str1, string str2) : Base(str1)
    {
        cout << "The camp is " << str2 << ".\n";
    }
};
int main()
{
    shared_ptr<Camp> outpost = make_shared<Camp>("secure", "secluded");
    return 0;
}