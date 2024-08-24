#include <iostream>
using namespace std;

int iterative(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
        factorial *= i;
    return factorial;
}

int recursive(int n)
{
    if (n == 0)
        return 1;
    else
        return n * recursive(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial undefined for -ve #." << endl;
    else
    {
        cout << "Iterative factorial of " << n << ": " << iterative(n) << endl;
        cout << "Recursive factorial of " << n << ": " << recursive(n) << endl;
    }

    return 0;
}
