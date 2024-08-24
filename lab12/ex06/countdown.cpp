#include <iostream>
using namespace std;

// void sign(int n) {
//     while (n > 0) {
//         cout << n << " ";
//         n--;
//     }
// }

void sign(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        n--;
        sign(n);
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Behavior undefined for -ve #." << endl;
    else
    {
        // cannot cout directly as void have no return type.
        cout << "Output: ";
        sign(n);
        cout << endl;
    }
}