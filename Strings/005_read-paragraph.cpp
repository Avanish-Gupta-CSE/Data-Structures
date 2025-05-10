#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char para[500];
    cin.getline(para, 500, '.');
    cin.get(); // to eat-up extra '\n'
    cout << para << endl;

    cout << strlen(para) << endl;

    return 0;
}