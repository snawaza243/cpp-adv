#include <iostream>

/**
 * Pointer: An address variable that is meant for storing address fo data.
 * Normal variables are data variable
 * Pointers are address variable
 * Pointers are used for indirectly access the external data resource.
 *
 * Why pointer directly access data data
 * Program directly access the code section and stack
 * But not access the heap memory of main memory
 * Because heap is out side (external) to the program
 * Thats why we need to the pointer to access heap memory.
 * So a pointer within it self that point that it can access anything.
 *
 * monitor, network connection, internet, keyboard, mouse etc all are external resource then need pointer to access by the program.
 *
 * Mainly pointer is used for
 * --> Accessing heap memory
 * --> Accessing resources
 * --> Parameter passing
 *
 *
 * with * : declare and dereference
 * with & : initialize
 *
 * include stdlib.h
 */
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 10; // declare+init data variable;
    int *p;     // declare (dereference) pointer address variable;
    p = &a; // init+ assign p that store address of a
    // cout << a << endl << p << endl;


    int *q;
    q = (int *)malloc(5 * sizeof(int)); // in c

    int *r;
    r = new int[5];  //in c++

    
}