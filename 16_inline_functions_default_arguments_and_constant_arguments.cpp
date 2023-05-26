#include <iostream>
using namespace std;

// int product(int a, int b) {
//     //Never use staic with inline functions
//     static int c = 0;// This executes only once
//     //int c = 0 This will set the value of c to 0 every time the function is called
//     c = c + 1;
//     return a * b + c;
// }

inline int product(int a, int b)
{
    return a * b;
}

// Default arguments
// First argument can never be default!!
float moneyReceived(int currentMoney, float factor = 1.04)
{
    // value of factor can be modified if required
    return currentMoney * factor;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    // Each time the value will increment because of static keyword
    cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "If you have " << money << " rupees in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP: if you have " << money << " rupees in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year";
    return 0;
}