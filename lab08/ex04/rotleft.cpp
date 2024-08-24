#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
void rotateleft(vector<T> &v)
{
    T first = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }

    v[v.size() - 1] = first;
}

template <class T>
void output(vector<T> v)
{
    for (T e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vi = {1, 3, 5, 7};
    for (int i = 0; i < vi.size(); i++)
    {
        rotateleft(vi);
        output(vi);
    }

    cout << "\n\n";

    vector<string> vs = {
        "a",
        "b",
        "c",
        "d",
        "e",
    };

    for (int i = 0; i < vs.size(); i++)
    {
        rotateleft(vs);
        output(vs);
    }

    return 0;
}
