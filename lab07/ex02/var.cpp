#include <iostream>
#include <memory>
using namespace std;
class Base
{
protected:
    int baseVar;

public:
    Base(int val = 2) { baseVar = val; }
    int getVar() const { return baseVar; }
};
class Derived : public Base
{
private:
    int deriVar;

public:
    Derived(int val = 100) { deriVar = val; }
    int getVar() const { return deriVar; }
};
int main()
{
    shared_ptr<Base> optr = make_shared<Derived>();
    cout << optr->getVar() << endl;
    return 0;
}