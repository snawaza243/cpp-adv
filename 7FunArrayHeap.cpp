#include <iostream>
using namespace std;

// Returning of array of create memory in heap
int *fun7(int size)
{
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}
int main()
{
    int *ptr, sz = 5;
    ptr = fun7(sz);

    for (int i = 0; i < sz; i++)
    {
        cout << "Created element " << ptr[i] << endl;
    }

    return 0;
}