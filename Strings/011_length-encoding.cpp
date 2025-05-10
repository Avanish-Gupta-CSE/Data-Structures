#include <iostream>
#include <string.h>
using namespace std;

int compress(string str)
{

    int n = str.length();

    string output;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }

        if (count > 1)
        {
            output += str[i];
            output += to_string(count);
        }
        else
        {
            output += str[i];
        }
    }
    cout << output << endl;
    return output.length();
}

string compressString(string str)
{
    int n = str.length();

    string output;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if (output.length() > str.length())
    {
        return str;
    }
    return output;
}

int main()
{
    string s1 = "aaabbccddee";
    cout << compressString(s1) << endl;
    cout << compress(s1) << endl;
    string s2 = "abcd";
    cout << compressString(s2) << endl;
    cout << compress(s2) << endl;

    return 0;
}