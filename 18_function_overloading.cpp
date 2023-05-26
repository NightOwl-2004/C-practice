#include <iostream>
using namespace std;

int sum(){
    return 2;
}

int sum(int a, int b)
{
    cout << "Function with two arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Function with three arguments" << endl;
    return a + b + c;
}

int main()
{
    cout << "Sum of 4 and 5 is " << sum(4, 5) << endl;
    cout << "Sum of 7 and 3 and 10 is " << sum(7, 3, 10) << endl;
    cout << "Sum of 1 + 1 is " << sum();

    return 0;
}