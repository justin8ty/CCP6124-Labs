#include <iostream>
#include <climits>
using namespace std;

#include <iostream>
using namespace std;

void odd(int a, int &oddSum, int &minOdd)
{
    if ((a % 2) != 0)
    {
        oddSum += a;
        if (a < minOdd)
            minOdd = a;
    }
}

void even(int a, int &evenSum, int &maxEven)
{
    if ((a % 2) == 0)
    {
        evenSum += a;
        if (a > maxEven)
            maxEven = a;
    }
}

int main()
{
    int number;
    int oddSum = 0;
    int evenSum = 0;
    int minOdd = INT_MAX;
    int maxEven = INT_MIN;

    do
    {
        cout << "Type a number (0 to exit): ";
        cin >> number;
        odd(number, oddSum, minOdd);
        even(number, evenSum, maxEven);
    } while (number != 0);

    cout << "Sum of odd  #: " << oddSum << endl;
    cout << "Sum of even #: " << evenSum << endl;

    if (minOdd != INT_MAX)
        cout << "Minimum odd  #: " << minOdd << endl;
    else
        cout << "No odd # entered." << endl;

    if (maxEven != INT_MIN)
        cout << "Maximum even #: " << maxEven << endl;
    else
    {
        cout << "No even # entered." << endl;
    }

    return 0;
}
