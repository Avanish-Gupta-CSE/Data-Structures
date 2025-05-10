#include <iostream>
#include <string.h>
using namespace std;
/**
Given a string, write a c function to check if it is palindrome or not.

A string is said to be palindrome if reverse of the string is same as string.
For example, “abba” is palindrome, but “abbc” is not palindrome.

Input Format
In the function a string is passed.

Output Format
Return true if it is palindrome else false.

Sample Input
abcdcba

Sample Output
true
*/
int main()
{
    bool ans = false;
    string str;
    cin >> str;

    int len = str.length();

    int ptr1 = 0;
    int ptr2 = len - 1;

    while (str[ptr1++] == str[ptr2--])
    {
        if ((ptr1 == ptr2) or (ptr1 > ptr2))
        {
            ans = true;
            break;
        }
    }
    cout << "Answer : " << (bool)ans << endl;

    return 0;
}