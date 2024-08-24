#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void function(string str, int pos);
int main(int argc, char *argv[])
{
    string names = "Adam and Eve";
    function(names, 0);
    return 0;
}
void function(string str, int pos)
{
    if (pos < str.length())
    {
        function(str, pos + 1);
        cout << str[pos];
    }
}