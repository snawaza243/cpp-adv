#include <iostream>
using namespace std;
void SwapwithValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}
int main()
{
    int a = 10, b = 13;

    cout << "a = " << a << endl
         << "b = " << b << endl;
    SwapwithValue(a, b);
    cout << "a = " << a << endl
         << "b = " << b << endl;
    return 0;
}