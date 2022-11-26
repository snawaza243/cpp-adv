#include <iostream>
using namespace std;

int sum(int A[], int n)
{
    int s;//--> 1
    for (int i = 0; i < n; i++) 
        //1         n+1     n   --> 2(n+1)
        // because condition will check while it will fail then out of for thats why n+1
    {
        s = s + A[i]; //-->n
    }
    return s;

    // total= f(n)=2n+3
}
int main()
{

    return 0;
}