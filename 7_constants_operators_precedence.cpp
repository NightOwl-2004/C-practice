#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int pi = 3.14; // This is a constant variable and cannot be changed
    // pi = 22/7; Reassingning the constant variable will cause an error
    cout << pi << endl;

    int a = 44, b = 432, c = 5321;

    // Most used manipulators are endl and setw
    cout << "The value of a without setw: " << a << endl;
    cout << "The value of b without setw: " << b << endl;
    cout << "The value of c without setw: " << c << endl;

    cout << "The value of a with setw: " << setw(4) << a << endl;
    cout << "The value of b with setw: " << setw(4) << b << endl;
    cout << "The value of c with setw: " << setw(4) << c << endl;

    // Operators precedence
    int no1 = 19, no2 = 13;
    int c = a * 5 + b;
    cout << c;

    return 0;
}