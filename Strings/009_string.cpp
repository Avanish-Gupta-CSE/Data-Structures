#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string s1 = "Hello world";
    cout << s1 << endl;

    string s2("Hello new World");
    cout << s2 << endl;

    string s3;
    getline(cin, s3);
    cout << s3 << endl;

    // to enter paragraph
    string s4;
    getline(cin, s4, '.');
    cin.get();
    cout << s4 << endl;

    for (char x : s1)
    {
        cout << x << ",";
    }
    cout << endl;

    vector<string> stringArr;
    string tmp;
    int n = 5;
        
    while (n--)
    {
        getline(cin, tmp);
        stringArr.push_back(tmp);
    }

    for (string str : stringArr)
    {
        cout << str << endl;
    }

    return 0;
}