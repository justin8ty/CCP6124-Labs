#include <iostream>
#include <memory>
using namespace std;
class First
{
protected:
    int a;

public:
    First(int x = 1) { a = x; }
    int getVal() const { return a; }
};
class Second : public First
{
private:
    int b;

public:
    Second(int y = 5) { b = y; }
    int getVal() const { return b; }
};
int main()
{
    shared_ptr<First> object1 = make_shared<First>();
    shared_ptr<Second> object2 = make_shared<Second>();
    cout << object1->getVal() << endl;
    cout << object2->getVal() << endl;
    return 0;
}