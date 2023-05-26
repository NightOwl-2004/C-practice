#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? --> data type which holds the address of other data types
    // * --> Dereference operator
    // & --> Address of operator
    int a = 4;
    int *b = &a;

    cout << "The address of 'a' is:" << b << endl;
    cout << "The value at address of 'a' is: " << *b << endl;

    // Pointer to a pointer
    int **c = &b;
    cout << "The address of 'b' is: " << c << endl;
    cout << "The value at address of 'b' is: " << *b << endl;
    cout << "The value at address of value_at(value_at(c)): " << **c << endl;

    return 0;
}