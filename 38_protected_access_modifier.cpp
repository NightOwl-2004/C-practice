#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : public Base
{
public:
};

int main()
{

    return 0;
}

/*
For a class member:

                    Public Derivation   Private Derivation  Protected Derivation
1.Private member        Not inherited       Not inherited       Not inherited
2.Public member         Protected           Private             Protected
3.Protected member      Public              Private             Protected
*/