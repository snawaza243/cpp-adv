#include <iostream>
using namespace std;

class Rectangle
{
private:
// data member
    int length;
    int breath;

public:
// member function/ Non-argument constructor
    Rectangle()
    {
        int length;
        int breath;
    }
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength()
    {
        return length;
    };

    int getBreath()
    {
        return breath;
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreath(int b)
    {
        breath = b;
    }
};

// implementation
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breath = b;
}
int Rectangle::area()
{
    return length * breath;
}
int Rectangle::perimeter()
{
    return 2 * (length * breath);
}

// Rectangle:: ~ Rectangle()
// {
//     cout << "This is destructor";
// }
int main()
{
    Rectangle r(10, 15);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setBreath(16);
    r.setLength(11);
    cout << r.getLength() << endl;
    cout << r.getBreath() << endl;
}