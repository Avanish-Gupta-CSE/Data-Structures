// find displacement:
// given a long route containing N,s,e,w directions
// find the shortest path to reach the location.

// sample i/p: SNNNEWE
// sample o/p: NNE or ENN

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char route[100];
    cin.getline(route, 100);

    int x = 0;
    int y = 0;

    // for (int i = 0; i < strlen(route); i++)
    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
        // if (route[i] == 'N')
        //     y++;
        // else if (route[i] == 'S')
        //     y--;
        // else if (route[i] == 'E')
        //     x++;
        // else if (route[i] == 'W')
        //     x--;
    }

    if (y > 0)
    {
        while (y)
        {
            cout << 'N';
            y--;
        }
    }
    else if (y < 0)
    {
        while (y)
        {
            cout << 'S';
            y++;
        }
    }

    if (x > 0)
    {
        while (x)
        {
            cout << 'E';
            x--;
        }
    }
    else if (x < 0)
    {
        while (x)
        {
            cout << 'W';
            x++;
        }
    }

    return 0;
}
