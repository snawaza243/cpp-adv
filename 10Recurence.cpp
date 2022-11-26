#include <iostream>
using namespace std;

int fun1(int a)
{
    if (a > 0)
    {
        cout<<"Before print " << a << endl;
        fun1(a - 1);
        cout<<"After print " << a << endl;
    }
    return 0;
}
int main()
{
    int x = 10;
    fun1(x);
}