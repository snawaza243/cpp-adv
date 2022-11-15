#include <iostream>
using namespace std;
int main()
{
    /**
     * Arrays: Collection of similar data elements.
     */

    int A[5]; // array declaration

    // array initialization
    A[0] = 2;
    A[1] = 4;
    A[2] = 6;
    A[3] = 8;
    A[4] = 10;

    // array declaration + initialization
    int B[5] = {3, 6, 9, 7, 5};

    // accessing the array elements

    cout << "A[2] element of A = " << A[2] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "All element of A = " << A[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "All element of B = " << B[i] << endl;
    }
    return 0;
}
