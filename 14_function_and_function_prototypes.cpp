#include <iostream>
using namespace std;

// int add(int a, int b); //--> Acceptable
// int add(int, int);// -->Also Acceptable

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Addition is " << add(num1, num2);
    return 0;
}
// Here num1 and num2 are acctual parameters
// Here a and b are formal parameters

