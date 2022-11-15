#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // creating array in main memory with pointer

    int A[5] = {1, 3, 4, 5, 2};
    int *p;

    p = &A[1]; // address of A[0]
    cout << p << endl;
    p = A; // address of random A
    cout << p << endl;
    // Dont use as p = &A;
}