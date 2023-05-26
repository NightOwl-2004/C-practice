#include <iostream>
using namespace std;

int main()
{
    // << is called insertion operator
    // >> is called extraction operator
    int num1, num2;
    cout << "Enter the value for num1\n";
    cin >> num1;
    cout << "Enter the value for num2\n";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    return 0;
}