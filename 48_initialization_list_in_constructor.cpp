#include <iostream>
using namespace std;

/*
! Syntax for initializtion list in constructor:
* constructor(arguments) : intitialization section
* {
*     assignment + other code
* }
*/

class Test
{
    int a, b;

public:
    //? Test(int i, int j) : a(i), b(i+j){ --> This can also be done
    //? Test(int i, int j) : a(i), b(2 * j){ --> This can also be done
    //? Test(int i, int j) : a(i), b(a + j){ --> This can also be done
    //! Test(int i, int j) : b(j), a(i + b){ --> This cannot be done as a is declared first so it will assigned garbage value to a

    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor is executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}