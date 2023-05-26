#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalulator
{
protected:
    int a, b;

public:
    void getOperand(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void displayOperations()
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
        cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
        cout << "Division of " << a << " and " << b << " is " << a / b << endl;
        cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
};

class ScientificCalculator
{
protected:
    int x, y;

public:
    void getOperand(int num1, int num2)
    {
        x = num1;
        y = num2;
    }

    void displayScientificOperations()
    {
        cout << "--------------------------------" << endl;
        cout << "Value of cos(x)+cos(y) is " << cos(x) + cos(y) << endl;
        cout << "Value of sin(x)+sin(y) is " << sin(x) + sin(y) << endl;
        cout << "Value of tan(x)+tan(y) is " << tan(x) + tan(y) << endl;
        cout << "Value of log(x)+log(y) is " << log(x) + log(y) << endl;
    }
};

class HybridCalculator : public SimpleCalulator, public ScientificCalculator
{
public:
    HybridCalculator(int no1, int no2)
    {
        // Ambiguity resolution
        SimpleCalulator :: getOperand(no1, no2);
        ScientificCalculator :: getOperand(no1, no2);
        displayOperations();
        displayScientificOperations();
    }
};

int main()
{
    HybridCalculator calc(5, 3);

    return 0;
}