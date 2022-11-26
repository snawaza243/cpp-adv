#include <iostream>
using namespace std;

/**
 * Structure: Collection of related data member under one name and thse data menber can be similar or dissimilar.
 * structure is used for user defined datatype by using the preemptive data types (integer, float, double, character etc.)
 */

// defining the structure
struct Rectangular
{
    int l;
    int b;
};

struct Complex
{
    int real;
    int img;
};

struct Student
{
    int roll;
    char name[25];
    char dep[10];
    char address[50];
};

struct Card
{
    int face;
    int shape;
    int color;

    /**
     * face: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, J(11), Q(12), K(13)
     * shape:   club/chidi  = 0,
     *          spade/kala  = 1;
     *          diamond     =2;
     *          heart/lal   =3;
     * color: black(0), red(1)
     */
};

int main()
{

    // declaration of Rectangular struture
    struct Rectangular r;
    // init + assign data to the member of defined and declared structure
    // Accessing structure member with 'dote' operator
    r.l = 5;
    r.b = 7;
    cout << r.l * r.b << endl;

    // declaration+initialization
    struct Complex comp = {{comp.real = 2}, {comp.img = 3}};
    cout << comp.real << " + i" << comp.img << endl;

    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;

    struct Card c2[52] = {
        {1, 1, 0}, // c2[0]
        {2, 0, 1}, // c2[1]
        {1, 2, 1}  // c2[2]
    };

    c2[0].face;   // 1
    c2[0].shape;  // 1
    c2[0].color; // 0

    return 0;
}