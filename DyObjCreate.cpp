#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{
    Rectangle *p;

    // dynamically allotting memory in heap

    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //in c
    // p = (struct Rectangle *)malloc(8); //with defined size
    p = new Rectangle; // in c++

    // accessing the member of Structure Rectangle with pointer
    p->length = 15;
    p->breath = 16;

    cout << p->length << endl;
    cout << p->breath << endl;

    cout << &p->length << endl;
    cout << &p->breath << endl;
    return 0;
}