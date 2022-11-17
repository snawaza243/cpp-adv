#include <iostream>
using namespace std;

void SwapwithRecerence(int &x, int &y)
{
    int temp;
    x = temp;
    y = x;
    x = y;
}
int main()
{
    int a = 10, b = 13;

    cout << "a = " << a << endl
         << "b = " << b << endl;
    SwapwithRecerence(a, b);
    cout << "a = " << a << endl
         << "b = " << b << endl;
    return 0;
}