#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    //! In C++ most importance is given to local variables

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    //* 'This' is a keyword which is a pointer  which points to the object which invokes the member function
    A a;
    a.setData(11);
    a.getData();

    return 0;
}