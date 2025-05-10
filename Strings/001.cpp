#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    // char a[100];
    // char a[100] = {'a','b','c'}; //wrong
    
    /*
    char a[100] = {'a','b','c','\0'}; //right
    char a[100] = "abc";
    */

    char a[] = {'a','b','c','\0'};
    cout << a << endl;
    char b[] = "abcd";
    cout << b << endl;


    cout << strlen(a) << endl;
    cout << sizeof(a) << endl;


    return 0;
}