#include <iostream>
using namespace std;
/**
 * References: A references is the nick name given to an existing variable or alias given to a variable.
 * Need of references: for parameter passing, in C++ for writing small function instead of use pointer
 * Note I: references does not consume memory but ses the same memory of its main variable
 * Note II: Reference is not a pointer
 * 
*/
int main()
{
    int a = 7;
    int &r = a; // here r is reference an another name of a;

    printf("a = %d", a);
    printf("\nr = %d\n", r);
    cout << sizeof(a) << endl;
    cout << sizeof(r);
}