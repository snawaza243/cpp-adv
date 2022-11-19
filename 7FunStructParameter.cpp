#include <iostream>
using namespace std;

struct Rectangle
{
    int l, b;
};

// call by value function
int areaV(struct Rectangle r1)
{
    return r1.l * r1.b;
}

// call by reference function

int areaR(struct Rectangle &r1)
{
    r1.l = 11;
    return r1.l * r1.b;
}

// call by address function
int areaA(struct Rectangle *p, int l)
{
    // Here l is member of Rectangle structure
    p->l ;
    return l;
}

int main()
{
    // call by value
    // Rectangle r;
    // r.l = 10;
    // r.b = 5;
    // cout << areaV(r);

    // call by references
    // Rectangle r;
    // r.l = 10;
    // r.b = 5;
    // cout << areaR(r);

    // call by address
    Rectangle r;
    r.l = 10;
    r.b = 5;

    // sending the new value of l 
    cout<<areaA(&r, 12);
}