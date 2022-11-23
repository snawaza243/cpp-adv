#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breath = b;
};

int area(struct Rectangle r)
{
    cout << r.length * r.breath;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}
void changeBreath(struct Rectangle *r, int b)
{
    r->breath = b;
}

int getLength(struct Rectangle r)
{
    cout << r.length;
}

int getBreath(struct Rectangle r)
{
    cout << r.breath;
}
int main()
{
    struct Rectangle r1;
    initialize(&r1, 5, 10);
    cout << "Length : " << r1.length << endl
         << "Breath : " << r1.breath << endl;
    cout << "Area : " << area(r1) << endl;
    changeLength(&r1, 6);
    changeBreath(&r1, 11);
    cout << "New Length : " << r1.length << endl;
    cout << "New Breath : " << r1.breath << endl;

    //
}