#include <bits/stdc++.h>
using namespace std;

void addDigitsInString(string &s, int num)
{

    vector<int> digits;

    while (num)
    {
        digits.push_back(num % 10);
        num = num / 10;
    }

    while (digits.size())
    {
        int x = digits[digits.size() - 1];
        s += x + '0';
        digits.pop_back();
    }
}

int compress(vector<char> &chars)
{
    // your code goes here
    string s;

    int len = chars.size();

    int i = 0;
    char temp = chars[i];
    int countTemp = 1;
    while (i < len)
    {
        i++;

        if (chars[i] == temp)
        {
            countTemp++;
        }
        else
        {
            if (countTemp > 1)
            {
                s += temp;
                addDigitsInString(s, countTemp);
            }
            else
            {
                s += temp;
            }
            countTemp = 1;
            temp = chars[i];
        }
    }

    cout << s << endl;
    return s.length();
}

int main()
{

    vector<char> ch = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c'};

    cout << compress(ch);
    // cout << ch.size();

    return 0;
}