#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    // p = new int [5];

    p[0] = 12;
    p[1] = 14;
    p[2] = 23;
    p[3] = 11;
    p[4] = 21;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
}