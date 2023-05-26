#include <iostream>
using namespace std;

template <class T1, class T2>
class MyClass
{
    T1 data1;
    T2 data2;

public:
    MyClass(T1 d1, T2 d2) : data1(d1), data2(d2) {}
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    MyClass<int, char> obj(2, 'Y');

    obj.display();

    return 0;
}