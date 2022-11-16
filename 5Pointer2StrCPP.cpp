#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{

    // only for c++

    // declare defined structure in c++
    Rectangle r;

    r.length = 10;
    r.breath = 11;
    cout << "r.length = " << r.length << endl;
    cout << "r.breath = " << r.breath << endl;
    // declare and initialize pointer of defined structure in c++
    Rectangle *p = &r;

    // access and assigning structure member;
    // it is going to reassign the value or r.length and r.breath
    (*p).length = 20;
    (*p).breath = 21;
    cout << "(*p).length = " << (*p).length << endl;
    cout << "(*p).breath = " << (*p).breath << endl;
    cout << "r.length = " << r.length << endl;
    cout << "r.breath = " << r.breath << endl;

    cout << "&(*p).length = " << &(*p).length << endl;
    cout << "&(*p).breath = " << &(*p).breath << endl;

    cout << "&r.length = " << &r.length << endl;
    cout << "&r.breath = " << &r.breath << endl;
}