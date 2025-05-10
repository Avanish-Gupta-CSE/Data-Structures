#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

string vowel(string S)
{
    // your code goes here
    string output;

    for (char ch : S)
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        {
            output += ch;
        }
    }
    return output;
}

int main()
{
    cout << vowel("aeoibsddaeioudb") << endl;

    return 0;
}