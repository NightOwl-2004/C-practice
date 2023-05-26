#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    /*
    Constructor is a special member function with the same name as of the class.
    It is used to initialize objects of its class.
    It is automatically invoked.
    */
    Complex(void); // This is a default constructor, as it takes no arguments
    void printData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex()
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printData();

    return 0;
}

/*
Characteristics of constructors

1. It should be declared in the public section of the class.
2. They are automatically invoked whenenver the object is created.
3. They cannot return value and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.
*/