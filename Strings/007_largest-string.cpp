#include <iostream>
#include <string.h>
using namespace std;

// Problem: Read N strings and print largest string. Each string can have upto 1000 characters.

int main()
{
    int n;
    cin >> n;

    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_len = 0;

    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);

        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largest, sentence);
        }
    }
    cout << "Largest String: " << largest << endl;

    return 0;
}