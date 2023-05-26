#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex obj1, Complex obj2);

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex obj1, Complex obj2)
{
    Complex obj3;
    obj3.setNumber((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
Properties of friend functions.
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class.
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member. Ex. cout << a will be invalid here.
*/