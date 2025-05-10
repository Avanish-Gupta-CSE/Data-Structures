#include <iostream>
#include <string.h>
#include <vector>
#include <map>

#include <typeinfo>

using namespace std;

bool arePermutation(string A, string B)
{
    // your code goes here
    map<char, int> m1;
    for (char ch : A)
    {
        m1[ch]++;
    }

    // for (auto i : m1)
    // {
    //     cout << i.first << " -> " << i.second << endl;
    // }

    map<char, int> m2;
    for (char ch : B)
    {
        m2[ch]++;
    }

    // for (auto i : m2)
    // {
    //     cout << i.first << " -> " << i.second << endl;
    // }

    if (m1 == m2)
        return true;
    else
        return false;
}

int main()
{
    cout << arePermutation("abc", "acb") << endl;
    return 0;
}