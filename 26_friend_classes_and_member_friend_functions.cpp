#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individual methods as friend declarations
    // friend int Calculator ::sumComplex(Complex obj1, Complex obj2);
    // friend int Calculator ::sumCompComplex(Complex obj1, Complex obj2);

    // Alternative method by declaring whole class as a friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumComplex(Complex obj1, Complex obj2)
{
    return obj1.a + obj2.a;
}

int Calculator ::sumCompComplex(Complex obj1, Complex obj2)
{
    return obj1.b + obj2.b;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int result = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << result << endl;

    return 0;
}