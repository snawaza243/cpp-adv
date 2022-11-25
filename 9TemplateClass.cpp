#include <iostream>
using namespace std;

/**
 * C++ support generic function and generic class
 * For use different type of data type with a single class based data type program
 */

// class Arithmetic
// {
// private:
//     int a, b;

// public:
//     Arithmetic(int a, int b);
//     int add();
//     int sub();
// };

// Arithmetic::Arithmetic(int a, int b)
// {
//     this->a = a;
//     this->b = b;
// };

// int Arithmetic ::add()
// {
//     int c;
//     c = a + b;
//     return c;
// };
// int Arithmetic ::sub()
// {
//     int c;
//     c = a - b;
//     return c;
// }
// int main()
// {
//     Arithmetic ar(10, 5);
//     cout << "Sum = " << ar.add() << endl;
//     cout << "Sub = " << ar.sub() << endl;

//     return 0;
// }

// changing into template class

tamplate<class T>;
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

tamplate<class T>;
T Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
};

tamplate<class T>;
T Arithmetic<T>::add()
{
    int c;
    c = a + b;
    return c;
};

tamplate<class T>;
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
int main()
{
    Arithmetic<int> ar(10, 5);
    cout << "Sum = " << ar.add() << endl;
    cout << "Sub = " << ar.sub() << endl;

    return 0;
}