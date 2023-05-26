#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    { // Default constructor is needed or it will give error
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found compiler allocates a default copy constructor for every class
    Number(Number &obj)
    {
        cout << "Copy constructor is called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(x); // Copy constructor is invoked
    z1.display();

    z2 = z; // Copy constructor is not invoked

    Number z3 = z; // Copy constructor is invoked here

    return 0;
}