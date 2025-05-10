#include <iostream>
#include <string.h>
#include <vector>
#include <map>
using namespace std;

string removeDuplicate(string s)
{
    // your code goes here
    map<char, int> m1;

    for (char ch : s)
    {
        m1[ch]++;
    }
    s = "";

    for (auto i : m1)
    {
        s += i.first;
    }

    return s;
}

int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicate(s) << endl;
    return 0;
}