#include <iostream>
using namespace std;

void SwapwithAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *y = *x;
    *x = *y;
}
int main()
{
    int a = 10, b = 13;

    cout << "a = " << a << endl
         << "b = " << b << endl;
    SwapwithAddress(&a, &b);
    cout << "a = " << a << endl
         << "b = " << b << endl;
    return 0;

}