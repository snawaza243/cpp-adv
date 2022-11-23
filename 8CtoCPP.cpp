#include <iostream>
using namespace std;

struct Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    int area()
    {
        return length * breath;
    }

    void changeLength(int l)
    {
        length = l;
    }

    void changeBreath(int b)
    {
        breath = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreath()
    {
        return breath;
    }
};

int main()
{
    struct Rectangle r1(5.8, 10.6);
    cout << "Area:  " << r1.area() << endl;
    cout << "Length: " << r1.getLength() << endl;
}