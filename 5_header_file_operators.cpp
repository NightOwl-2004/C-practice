#include <iostream>
using namespace std;

// There are two types of header files
/*
1.System header files: It comes with the compiler
Ex. #include <iostream>
2.User defined header files: It is written by the programmer
Ex. #include "filename.h" -> The file should be present in the current directory
*/

int main()
{
    //<<endl can be used instead of \n for new lines
    int a, b;
    cout << "Enter value for 'a'" << endl;
    cin >> a;
    cout << "Enter value for 'b'" << endl;
    cin >> b;

    // Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;

    // Comparison operators
    /*
    ==
    >
    <
    >=
    <=
    !=
    */

    // Logical operators
    /*
    &&
    ||
    */
    return 0;
}