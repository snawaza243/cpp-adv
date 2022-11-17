#include <iostream>
using namespace std;
/**
 * Function: A function is a piece of code which perform a specific task.
 * functions are called modular or procedural
 * It is grouping of instruction but structure is grouping of data
 * use for reusability.
 * create function and put it li library and use to develop another program
 * modular programming supported by bot C and C++ both but C++ is beyond the limit with OOPS
 * Break a large program into small pieces of function that can be develop by multiple person that is called modular or procedural programming 
 * When the developing is being with a single main function that is called monolithic programming. Here only one person can do.
 * 
 * 
 * Parameter passing method 
 * --> passe by value
 * --> pass by address
 * --> pass by references (only in C++)
 * 
 * Benefits of function
 * it has own activation record
 * it created on the call and when terminated then it destroy
 * function cant access of main function variable directly but can with pointer indirectly
 * main function cant access fo function variable
 * 
 * 
*/

//prototype of function
int add(int x, int y)  //header or declaration of signature of function
{
    int z;
    z = x + y;
    return (z);
// all the things of block are called defintion or elaboration of fuction 
}

int main()
{
    int a, b, c;
    a = 10;
    b = 22;
    c = add(a, b);
    printf("Sum  = %d", c);
}