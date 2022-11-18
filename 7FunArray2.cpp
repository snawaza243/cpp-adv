#include <iostream>
using namespace std;

// for each can not use pointer parameter but work on array declared in same main fun
// void fun3(int A[])
// {
//     for (int a : A)
//         cout << a : A << endl;
// }

void fun4(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{
    int n4 = 5;
    int arr4[n4] = {1, 2, 3, 4, 5};
    fun4(arr4, n4);


// for each calling 
    for (int n : arr4)
        cout<<"New " << n << " "<<endl;
    return 0;
}