#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // Can also be done as=>
    Complex *ptr = new Complex;

    // (*ptr).setData(10,11);
    // (*ptr).getData();
    //* Above thing can also be done as:-
    ptr->setData(10, 11);
    ptr->getData();

    return 0;
}