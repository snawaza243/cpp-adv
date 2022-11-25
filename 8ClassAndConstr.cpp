#include <iostream>
using namespace std;

class Rectangle
{
private:
    // data member
    int length;
    int breath;

public:
    // member function
    Rectangle() // Non-argument constructor / Default constructor
    {
        int length = breath = 1;
    }
    Rectangle(int l, int b); // overloaded or parametric constructor

    // facilitator pr perfaction or data member object
    int area();
    int perimeter();

    int getLength() // Axessor
    {
        return length;
    };

    int getBreath()
    {
        return breath;
    }

    void setLength(int l) // mutator
    {
        length = l;
    }
    void setBreath(int b)
    {
        breath = b;
    }

    //deallocator useful on heap memory
    // ~Rectangle()4;
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

// Rectangle::~Rectangle()
// {
//     cout << "This is destructor";
// }
int main()
{
    Rectangle r(10, 15);
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;
    r.setBreath(16);
    r.setLength(11);
    cout << "New Length = " << r.getLength() << endl;
    cout << "New Breath = " << r.getBreath() << endl;
}