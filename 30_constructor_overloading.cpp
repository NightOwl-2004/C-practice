#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.printData();

    Complex c2(2);
    c2.printData();

    Complex c3(3, 4);
    c3.printData();

    return 0;
}