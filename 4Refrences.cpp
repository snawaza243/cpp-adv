#include <iostream>
#include <stdlib.h>

int main()
{
    int *p;
    p = new int[5];

    p[0] = 1;
    p[1] = 6;
    p[2] = 3;
    p[3] = 9;
    p[4] = 1;

    for (int i = 0; i < 5; i++)
    {
        // cout << p[i] << endl;
    }

    // delete [ ] p;
    // free(p)
}