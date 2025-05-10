#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // copy
    char sOne[] = "hello";
    char sTwo[1000];

    strcpy(sTwo, sOne);
    cout << sTwo << endl;

    string s1 = "Hello";
    string s2;

    s2 = s1;
    cout << s1 << " " << s2 << endl;

    s1 = "hello people";
    cout << s1 << " " << s2 << endl;

    //===========================================
    // length
    string str = "hello";
    cout << str.length() << " or " << str.size() << endl;

    //============================================
    // compare
    string strOne = "hello";
    string strTwo = "hello";
    string strThree = "hella";
    string strFour = "hello";

    cout << (strOne == strTwo) << endl;
    cout << (strThree == strFour) << endl;

    //==========================================
    // concatenation
    string stringOne = "hello";
    string stringTwo = "world";
    stringTwo = stringOne + stringTwo;
    cout << stringTwo << endl;

    return 0;
}