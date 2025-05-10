#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // store and then count <--- approach 1
    // read one by one and then count <--- approach 2

    char ch;
    ch = cin.get();

    // count
    int alpha = 0;
    int digits = 0;
    int spaces = 0;

    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            spaces++;
        }
        ch = cin.get();
    }

    cout << "Total digits: " << digits << endl;
    cout << "Total alphabets: " << alpha << endl;
    cout << "Total spaces: " << spaces << endl;

    return 0;
}