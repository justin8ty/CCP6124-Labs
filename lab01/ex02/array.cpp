#include <iostream>
using namespace std;

void ReadArray(int a[], int size)
{
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> a[i];
    }
}

void MinMax(int a[], int size, int &minVal, int &maxVal)
{

    for (int i = 0; i < size; i++)
    {
        if (a[i] < minVal)
            minVal = a[i];
    }

    for (int i = 1; i < size; i++)
    {
        if (a[i] > maxVal)
            maxVal = a[i];
    }
}

void SortArray(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void DisplayArray(int a[], int size)
{
    cout << "Array sorted in ascending order:\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Size and sort array
    const int SIZE = 8;
    int Numbers[SIZE];

    ReadArray(Numbers, SIZE);
    int Min = Numbers[0];
    int Max = Numbers[0];

    SortArray(Numbers, SIZE);

    // Compare the members
    int minVal, maxVal;
    minVal = maxVal = Numbers[0];
    MinMax(Numbers, SIZE, minVal, maxVal);

    // Announce results
    cout << "Min value: " << minVal << endl;
    cout << "Max value: " << maxVal << endl;

    DisplayArray(Numbers, SIZE);
    return 0;
}