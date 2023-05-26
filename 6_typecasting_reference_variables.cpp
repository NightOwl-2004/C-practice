#include <iostream>
using namespace std;

int c = 45;

int main()
{
    int a, b, c;
    cout << "Enter value for a" << endl;
    cin >> a;
    cout << "Enter value for b" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is:" << c << endl;
    cout << "Global value is:" << ::c << endl; //:: refers to the global value

    // 33.4 is default double while passing it to a function
    // 33.4f or F -> f can be used to denote its a float while passing it to a function
    // 33.4l or L -> l can be used to denote its a double while passing it to a function
    cout << "Size of 33.4 is:" << sizeof(33.4) << endl;
    cout << "Size of 33.4f is:" << sizeof(33.4f) << endl;
    cout << "Size of 33.4l is:" << sizeof(33.4l) << endl;

    // Referencing a variable
    float x = 455;
    float &y = x;
    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;

    // Type casting
    float num = 38.9;
    cout << int(num); // can also be written as (int)num;

    return 0;
}