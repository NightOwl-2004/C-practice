#include <iostream>
using namespace std;

// Factorial using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibonacci(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return fibonacci(x - 2) + fibonacci(x - 1);
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    // cout << "The factorial of " << num << " is " << factorial(num) << endl;

    cout << "The term in fibonacci sequence at position " << num << " is " << fibonacci(num) << endl;

    return 0;
}