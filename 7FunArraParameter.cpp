#include <iostream>
using namespace std;

/**
 *    Array as Parameter of function
 * 
 * Array can be passed only call by address
 * like pointer to an array
 * Inside of a function for array, array element can be manipulated 
 * And that will change also main function element
 * 
 * void fun1(int A[], int n){...}  
 * --> Here A specifies only int array
 * 
 * void fun1(int *A, int n){....}  
 * --> * cn be pointer and array 
 * --> Here A can let pass pointer as well as array with astrict *
 * --> It is a general method
 * 
 * A function can return an array from created memory in heap
 * malloc allot memory in heap
 * code write in code section
 * function in the main memory stack
 * on the call of array creator function from stack with array size, 
 * then it create memory in heap and element return as coding
 * 
 * 
 *    fun definition                fun call                when to use
 * void swap(int x, int y)          swap(a,b)               dont change actual parameter value
 * void swap(int *x, int *y)        swap(&a,&b)             directly work on actual parameter
 * void swap(int &x, int &y)        swap(a,b)               like call by address, inline function
 *    
*/


void fun1(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
};

void fun2(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    
}

int main(){
    int n1 = 5;
    int arr1[n1] = {1,2,3,4,5};
    fun2(arr1,n1);

}