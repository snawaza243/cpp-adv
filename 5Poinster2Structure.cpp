#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{
    // struct Rectangle r; // in c need struct keyword
    // Rectangle r; // in C++ not need struct keyword
    // r = {10, 15};
    // cout << "Area = " << r.length * r.breath << endl;

    // pointer to structure
    // only for c

    // declare data variable r of defined str Rectangle
    struct Rectangle r;

    // declare pointer variable p of defined str Rectangle and
    // initialize to data variable r
    struct Rectangle *p = &r;

    // access and assign for normal variable
    r.length = 10;
    r.breath = 11;

    // access and assign for pointer variable
    p->length = 20; // overriding of r.length and reassign
    p->breath = 21; // overriding or r.breath and reassign

    // printing the value of length and breath
    cout << r.length << endl; // 20
    cout << r.breath << endl; // 21

    // printing the address of length and breath
    cout << &r.length << endl; // 20
    cout << &r.breath << endl; // 21
}