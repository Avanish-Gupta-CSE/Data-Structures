#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int binaryToDecimal(string s)
{

    int n = s.length();
    int result = 0;

    for (char ch : s)
    {
        if (ch == '1')
        {
            result += pow(2, n - 1);
        }
        else if (ch == '0')
        {
            // nothing to be done
        }
        n--;
    }
    return result;
}

int main()
{
    cout << binaryToDecimal("111") << endl;
    return 0;
}