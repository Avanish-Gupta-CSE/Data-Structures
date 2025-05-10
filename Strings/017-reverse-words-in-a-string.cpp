#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

string reverseWords(string S)
{
    // code here

    string temp = "";
    vector<string> stringVector;

    for (char ch : S)
    {
        if (ch != '.')
        {
            temp += ch;
        }
        else
        {
            stringVector.push_back(temp);
            temp = "";
        }
    }
    stringVector.push_back(temp);

    // for (int i = 0; i<stringVector.size(); i++)
    // {
    //     cout << stringVector[i] << " ,";
    // }
    // cout << endl;

    string output = "";
    int n = stringVector.size();

    for (int i = n - 1; i >= 0; i--)
    {
        output += stringVector[i];
        if (i != 0)
            output += '.';
    }
    // cout << output;

    return output;
}

int main()
{
    cout << reverseWords("i.like.this.program.very.much") << endl;

    return 0;
}